/*
 * itob(): transforms integer to integer string with number system 'b'
 */

void itob(int number, char string[], int number_system);

void itob(int n, char s[], int b)
{
    int power = 1;
    int counter = 0;
    int i;

    while (n >= power)
        power *= b;
    power /= b;

    for (i = 0; power > 0; ++i) {
        while (n >= power) {
            n -= power;
            ++counter;
        }

        switch (counter) {
        case 10:
            s[i] = 'A';
            break;
        case 11:
            s[i] = 'B';
            break;
        case 12:
            s[i] = 'C';
            break;
        case 13:
            s[i] = 'D';
            break;
        case 14:
            s[i] = 'E';
            break;
        case 15:
            s[i] = 'F';
            break;
        default:
            s[i] = counter + '0';
            break;
        }
        counter = 0;
        power /= b;
    }
    s[i] = '\0';
}

