print_test("d"); print_ret(PRINTF_MACRO("Bla bla %d", 0));
print_test("d"); print_ret(PRINTF_MACRO("Bla bla %d", 123));
print_test("d"); print_ret(PRINTF_MACRO("Bla bla %d", 12345678));
print_test("d"); print_ret(PRINTF_MACRO("Bla bla %d", -123));
print_test("d"); print_ret(PRINTF_MACRO("Bla bla %d", -12345678));
print_test("d"); print_ret(PRINTF_MACRO("Bla bla %d", -1));
print_test("d"); print_ret(PRINTF_MACRO("Bla bla %d", 1));
print_test("d"); print_ret(PRINTF_MACRO("Bla bla %d", -2147483647 - 1));
print_test("d"); print_ret(PRINTF_MACRO("Bla bla %d", 2147483647));
print_test("s"); print_ret(PRINTF_MACRO("Bla bla %s", 0));
print_test("s"); print_ret(PRINTF_MACRO("Bla bla %s", ""));
print_test("s"); print_ret(PRINTF_MACRO("Bla bla %s", "LoL"));
print_test("s"); print_ret(PRINTF_MACRO("Bla bla %s", "chaussette"));
print_test("s"); print_ret(PRINTF_MACRO("Bla bla %s", "Un gros test qui marche!"));
print_test("3d"); print_ret(PRINTF_MACRO("Bla bla %3d", 0));
print_test("10d"); print_ret(PRINTF_MACRO("Bla bla %10d", 0));
print_test(".d"); print_ret(PRINTF_MACRO("Bla bla %.d", 0));
print_test(".0d"); print_ret(PRINTF_MACRO("Bla bla %.0d", 0));
print_test(".0d"); print_ret(PRINTF_MACRO("Bla bla %11.0d", 0));
print_test(".3d"); print_ret(PRINTF_MACRO("Bla bla %.3d", 0));
print_test(".3d"); print_ret(PRINTF_MACRO("Bla bla %11.3d", 0));
print_test(".3d"); print_ret(PRINTF_MACRO("Bla bla %11.16d", 0));
print_test(".10d"); print_ret(PRINTF_MACRO("Bla bla %.10d", 0));
print_test("3d"); print_ret(PRINTF_MACRO("Bla bla %3d", 123));
print_test("10d"); print_ret(PRINTF_MACRO("Bla bla %10d", 123));
print_test(".d"); print_ret(PRINTF_MACRO("Bla bla %.d", 123));
print_test(".0d"); print_ret(PRINTF_MACRO("Bla bla %.0d", 123));
print_test(".3d"); print_ret(PRINTF_MACRO("Bla bla %.3d", 123));
print_test(".10d"); print_ret(PRINTF_MACRO("Bla bla %.10d", 123));
print_test("3d"); print_ret(PRINTF_MACRO("Bla bla %3d", 12345678));
print_test("3d"); print_ret(PRINTF_MACRO("Bla bla %6.3d", 12345678));
print_test("3d"); print_ret(PRINTF_MACRO("Bla bla %16.3d", 12345678));
print_test("10d"); print_ret(PRINTF_MACRO("Bla bla %10d", 12345678));
print_test("10d"); print_ret(PRINTF_MACRO("Bla bla %10.20d", 12345678));
print_test(".d"); print_ret(PRINTF_MACRO("Bla bla %.d", 12345678));
print_test(".d"); print_ret(PRINTF_MACRO("Bla bla %21.12d", 12345678));
print_test(".0d"); print_ret(PRINTF_MACRO("Bla bla %.0d", 12345678));
print_test(".0d"); print_ret(PRINTF_MACRO("Bla bla %1.2d", 12345678));
print_test(".3d"); print_ret(PRINTF_MACRO("Bla bla %.3d", 12345678));
print_test(".10d"); print_ret(PRINTF_MACRO("Bla bla %.10d", 12345678));
print_test("3d"); print_ret(PRINTF_MACRO("Bla bla %3d", -123));
print_test("10d"); print_ret(PRINTF_MACRO("Bla bla %10d", -123));
print_test(".d"); print_ret(PRINTF_MACRO("Bla bla %.d", -123));
print_test(".0d"); print_ret(PRINTF_MACRO("Bla bla %.0d", -123));
print_test(".3d"); print_ret(PRINTF_MACRO("Bla bla %.3d", -123));
print_test(".10d"); print_ret(PRINTF_MACRO("Bla bla %.10d", -123));
print_test("3d"); print_ret(PRINTF_MACRO("Bla bla %3d", -12345678));
print_test("10d"); print_ret(PRINTF_MACRO("Bla bla %10d", -12345678));
print_test(".d"); print_ret(PRINTF_MACRO("Bla bla %.d", -12345678));
print_test(".0d"); print_ret(PRINTF_MACRO("Bla bla %.0d", -12345678));
print_test(".3d"); print_ret(PRINTF_MACRO("Bla bla %.3d", -12345678));
print_test(".10d"); print_ret(PRINTF_MACRO("Bla bla %.10d", -12345678));
print_test("3d"); print_ret(PRINTF_MACRO("Bla bla %3d", -1));
print_test("10d"); print_ret(PRINTF_MACRO("Bla bla %10d", -1));
print_test(".d"); print_ret(PRINTF_MACRO("Bla bla %.d", -1));
print_test(".0d"); print_ret(PRINTF_MACRO("Bla bla %.0d", -1));
print_test(".3d"); print_ret(PRINTF_MACRO("Bla bla %.3d", -1));
print_test(".10d"); print_ret(PRINTF_MACRO("Bla bla %.10d", -1));
print_test("3d"); print_ret(PRINTF_MACRO("Bla bla %3d", 1));
print_test("10d"); print_ret(PRINTF_MACRO("Bla bla %10d", 1));
print_test(".d"); print_ret(PRINTF_MACRO("Bla bla %.d", 1));
print_test(".0d"); print_ret(PRINTF_MACRO("Bla bla %.0d", 1));
print_test(".3d"); print_ret(PRINTF_MACRO("Bla bla %.3d", 1));
print_test(".10d"); print_ret(PRINTF_MACRO("Bla bla %.10d", 1));
print_test("3d"); print_ret(PRINTF_MACRO("Bla bla %3d", -2147483647 - 1));
print_test("10d"); print_ret(PRINTF_MACRO("Bla bla %10d", -2147483647 - 1));
print_test(".d"); print_ret(PRINTF_MACRO("Bla bla %.d", -2147483647 - 1));
print_test(".0d"); print_ret(PRINTF_MACRO("Bla bla %.0d", -2147483647 - 1));
print_test(".3d"); print_ret(PRINTF_MACRO("Bla bla %.3d", -2147483647 - 1));
print_test(".10d"); print_ret(PRINTF_MACRO("Bla bla %.10d", -2147483647 - 1));
print_test("3d"); print_ret(PRINTF_MACRO("Bla bla %3d", 2147483647));
print_test("10d"); print_ret(PRINTF_MACRO("Bla bla %10d", 2147483647));
print_test(".d"); print_ret(PRINTF_MACRO("Bla bla %.d", 2147483647));
print_test(".0d"); print_ret(PRINTF_MACRO("Bla bla %.0d", 2147483647));
print_test(".3d"); print_ret(PRINTF_MACRO("Bla bla %.3d", 2147483647));
print_test(".10d"); print_ret(PRINTF_MACRO("Bla bla %.10d", 2147483647));
print_test("3s"); print_ret(PRINTF_MACRO("Bla bla %3s", 0));
print_test(".s"); print_ret(PRINTF_MACRO("Bla bla %.s", 0));
print_test(".3s"); print_ret(PRINTF_MACRO("Bla bla %.3s", 0));
print_test("3s"); print_ret(PRINTF_MACRO("Bla bla %3s", ""));
print_test(".s"); print_ret(PRINTF_MACRO("Bla bla %.s", ""));
print_test(".3s"); print_ret(PRINTF_MACRO("Bla bla %.3s", ""));
print_test("3s"); print_ret(PRINTF_MACRO("Bla bla %3s", "LoL"));
print_test(".s"); print_ret(PRINTF_MACRO("Bla bla %.s", "LoL"));
print_test(".3s"); print_ret(PRINTF_MACRO("Bla bla %.3s", "LoL"));
print_test("3s"); print_ret(PRINTF_MACRO("Bla bla %3s", "chaussette"));
print_test(".s"); print_ret(PRINTF_MACRO("Bla bla %.s", "chaussette"));
print_test(".3s"); print_ret(PRINTF_MACRO("Bla bla %.3s", "chaussette"));
print_test("3s"); print_ret(PRINTF_MACRO("Bla bla %3s", "Un gros test qui marche!"));
print_test(".s"); print_ret(PRINTF_MACRO("Bla bla %.s", "Un gros test qui marche!"));
print_test(".3s"); print_ret(PRINTF_MACRO("Bla bla %.3s", "Un gros test qui marche!"));
print_test("3x"); print_ret(PRINTF_MACRO("Bla bla %3x", 0));
print_test("10x"); print_ret(PRINTF_MACRO("Bla bla %10x", 0));
print_test(".x"); print_ret(PRINTF_MACRO("Bla bla %.x", 0));
print_test(".0x"); print_ret(PRINTF_MACRO("Bla bla %.0x", 0));
print_test(".3x"); print_ret(PRINTF_MACRO("Bla bla %.3x", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("Bla bla %.10x", 0));
print_test("3x"); print_ret(PRINTF_MACRO("Bla bla %3x", 123));
print_test("10x"); print_ret(PRINTF_MACRO("Bla bla %10x", 123));
print_test(".x"); print_ret(PRINTF_MACRO("Bla bla %.x", 123));
print_test(".0x"); print_ret(PRINTF_MACRO("Bla bla %.0x", 123));
print_test(".3x"); print_ret(PRINTF_MACRO("Bla bla %.3x", 123));
print_test(".10x"); print_ret(PRINTF_MACRO("Bla bla %.10x", 123));
print_test("3x"); print_ret(PRINTF_MACRO("Bla bla %3x", 12345678));
print_test("10x"); print_ret(PRINTF_MACRO("Bla bla %10x", 12345678));
print_test(".x"); print_ret(PRINTF_MACRO("Bla bla %.x", 12345678));
print_test(".0x"); print_ret(PRINTF_MACRO("Bla bla %.0x", 12345678));
print_test(".3x"); print_ret(PRINTF_MACRO("Bla bla %.3x", 12345678));
print_test(".10x"); print_ret(PRINTF_MACRO("Bla bla %.10x", 12345678));
print_test("3x"); print_ret(PRINTF_MACRO("Bla bla %3x", -123));
print_test("10x"); print_ret(PRINTF_MACRO("Bla bla %10x", -123));
print_test(".x"); print_ret(PRINTF_MACRO("Bla bla %.x", -123));
print_test(".0x"); print_ret(PRINTF_MACRO("Bla bla %.0x", -123));
print_test(".3x"); print_ret(PRINTF_MACRO("Bla bla %.3x", -123));
print_test(".10x"); print_ret(PRINTF_MACRO("Bla bla %.10x", -123));
print_test("3x"); print_ret(PRINTF_MACRO("Bla bla %3x", -12345678));
print_test("10x"); print_ret(PRINTF_MACRO("Bla bla %10x", -12345678));
print_test(".x"); print_ret(PRINTF_MACRO("Bla bla %.x", -12345678));
print_test(".0x"); print_ret(PRINTF_MACRO("Bla bla %.0x", -12345678));
print_test(".3x"); print_ret(PRINTF_MACRO("Bla bla %.3x", -12345678));
print_test(".10x"); print_ret(PRINTF_MACRO("Bla bla %.10x", -12345678));
print_test("3x"); print_ret(PRINTF_MACRO("Bla bla %3x", -1));
print_test("10x"); print_ret(PRINTF_MACRO("Bla bla %10x", -1));
print_test(".x"); print_ret(PRINTF_MACRO("Bla bla %.x", -1));
print_test(".0x"); print_ret(PRINTF_MACRO("Bla bla %.0x", -1));
print_test(".3x"); print_ret(PRINTF_MACRO("Bla bla %.3x", -1));
print_test(".10x"); print_ret(PRINTF_MACRO("Bla bla %.10x", -1));
print_test("3x"); print_ret(PRINTF_MACRO("Bla bla %3x", 1));
print_test("10x"); print_ret(PRINTF_MACRO("Bla bla %10x", 1));
print_test(".x"); print_ret(PRINTF_MACRO("Bla bla %.x", 1));
print_test(".0x"); print_ret(PRINTF_MACRO("Bla bla %.0x", 1));
print_test(".3x"); print_ret(PRINTF_MACRO("Bla bla %.3x", 1));
print_test(".10x"); print_ret(PRINTF_MACRO("Bla bla %.10x", 1));
print_test("3x"); print_ret(PRINTF_MACRO("Bla bla %3x", -2147483647 - 1));
print_test("10x"); print_ret(PRINTF_MACRO("Bla bla %10x", -2147483647 - 1));
print_test(".x"); print_ret(PRINTF_MACRO("Bla bla %.x", -2147483647 - 1));
print_test(".0x"); print_ret(PRINTF_MACRO("Bla bla %.0x", -2147483647 - 1));
print_test(".3x"); print_ret(PRINTF_MACRO("Bla bla %.3x", -2147483647 - 1));
print_test(".10x"); print_ret(PRINTF_MACRO("Bla bla %.10x", -2147483647 - 1));
print_test("3x"); print_ret(PRINTF_MACRO("Bla bla %3x", 2147483647));
print_test("10x"); print_ret(PRINTF_MACRO("Bla bla %10x", 2147483647));
print_test(".x"); print_ret(PRINTF_MACRO("Bla bla %.x", 2147483647));
print_test(".0x"); print_ret(PRINTF_MACRO("Bla bla %.0x", 2147483647));
print_test(".3x"); print_ret(PRINTF_MACRO("Bla bla %.3x", 2147483647));
print_test(".10x"); print_ret(PRINTF_MACRO("Bla bla %.10x", 2147483647));
print_test(".10x"); print_ret(PRINTF_MACRO("d10w0p |%10.0d| %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%.2s|\n", "quatre et deux"));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%.20s|\n", "quatre et deux"));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%.s|\n", "quatre et deux"));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%.0s|\n", "quatre et deux"));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%2s|\n", "quatre et deux"));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%20s|\n", "quatre et deux"));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%8s|\n", "quatre et deux"));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%2.2s|\n", "quatre et deux"));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%24.20s|\n", "quatre et deux"));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%12.s|\n", "quatre et deux"));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%4.0s|\n", "quatre et deux"));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%4.2s|\n", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%.2d|\n", -0));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%.20d|\n", 123456789));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%.d|\n", 123));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%.0d|\n", 19));
print_test(".10x"); print_ret(PRINTF_MACRO("3 R |%2d|\n", 12));
print_test(".10x"); print_ret(PRINTF_MACRO("4 R |%20d|\n", 19));
print_test(".10x"); print_ret(PRINTF_MACRO("5 R |%8d|\n", 1234));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%2.2d|\n", 12));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%25.20d|\n", 123456789));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%4.d|\n", 123));
print_test(".10x"); print_ret(PRINTF_MACRO("1 M |%5.0d|\n", 19));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%.2x|\n", 12));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%.20x|\n", 123456789));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%.x|\n", 123));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%.0x|\n", 19));
print_test(".10x"); print_ret(PRINTF_MACRO("3 R |%2x|\n", 12));
print_test(".10x"); print_ret(PRINTF_MACRO("4 R |%20x|\n", 19));
print_test(".10x"); print_ret(PRINTF_MACRO("5 R |%8x|\n", 1234));
print_test(".10x"); print_ret(PRINTF_MACRO("7 R |%2.2x|\n", 12));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%25.20x|\n", 123456789));
print_test(".10x"); print_ret(PRINTF_MACRO("2 R |%4.x|\n", 123));
print_test(".10x"); print_ret(PRINTF_MACRO("1 M |%5.0x|\n", 19));

print_test(".10x"); print_ret(PRINTF_MACRO("%d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%d", INT32_MIN));
print_test(".10x"); print_ret(PRINTF_MACRO("%d", INT32_MAX + 95));
print_test(".10x"); print_ret(PRINTF_MACRO("%d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("a%da", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("a%da", INT32_MIN));
print_test(".10x"); print_ret(PRINTF_MACRO("a%da", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%x", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%x", UINT32_MAX));
print_test(".10x"); print_ret(PRINTF_MACRO("%x", UINT32_MAX + 95));
print_test(".10x"); print_ret(PRINTF_MACRO("%x", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("a%xa", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("a%xa", UINT32_MAX));
print_test(".10x"); print_ret(PRINTF_MACRO("a%xa", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%x", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%x", UINT32_MAX));
print_test(".10x"); print_ret(PRINTF_MACRO("%x", UINT32_MAX + 95));
print_test(".10x"); print_ret(PRINTF_MACRO("%x", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("a%xa", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("a%xa", UINT32_MAX));
print_test(".10x"); print_ret(PRINTF_MACRO("a%xa", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%s", "Hello"));
print_test(".10x"); print_ret(PRINTF_MACRO("%s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("a%sa", "Hello"));
print_test(".10x"); print_ret(PRINTF_MACRO("a%sa", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("a%sa", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%s", "%15d"));
print_test(".10x"); print_ret(PRINTF_MACRO("%2d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%3d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("a%3da", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%4d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%2d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%3d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%4d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%4d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%1d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("a%1da", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%2s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%3s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%4s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("a%4sa", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%1s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("a%1sa", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%6s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%7s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%4s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%1s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("a%1sa", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%2.3d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%3.3d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("a%3.3da", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.3d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%2.3d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%3.3d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.3d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.3d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%1.3d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("a%1.3da", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%2.0d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%3.0d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("a%3.0da", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.0d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%2.0d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%3.0d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.0d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.0d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%1.0d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%2.d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%3.d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%1.d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("a%1.0da", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%2.7d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%15.7d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("a%3.7da", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.7d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%2.7d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%3.7d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%15.7d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.7d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%1.7d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("a%1.7da", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%2.3s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%3.3s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.3s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("a%4.3sa", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%1.3s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("a%1.3sa", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%6.3s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%7.3s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.3s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%1.3s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("a%1.3sa", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%2.2s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%3.2s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.2s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("a%4.2sa", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%1.2s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("a%1.2sa", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%6.2s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%7.2s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.2s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%1.2s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("a%1.2sa", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%2.10s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%3.10s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.10s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("a%4.10sa", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%1.10s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("a%1.10sa", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%6.10s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%7.10s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.10s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%1.10s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("a%1.10sa", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%2.s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%3.s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("a%4.sa", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%1.s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("a%1.sa", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%6.s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%7.s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%4.s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%1.s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("a%1.sa", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%.3d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.3d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.3da", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.3d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.3d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.3d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.3d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.3d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%.3d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.3da", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%.0d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.0d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.0da", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.0d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.0d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.0d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.0d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.0d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%.0d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%.d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%.d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.0da", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%.7d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%5.7d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.7da", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.7d", 100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.7d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.7d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%5.7d", -100));
print_test(".10x"); print_ret(PRINTF_MACRO("%.7d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%.7d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.7da", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%.3s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%.3s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%.3s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.3sa", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%.3s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.3sa", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%.3s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%.3s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%.3s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%.3s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.3sa", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%.2s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%.2s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%.2s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.2sa", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%.2s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.2sa", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%.2s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%.2s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%.2s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%.2s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.2sa", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%.10s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%.10s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%.10s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.10sa", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%.10s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.10sa", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%.10s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%.10s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%.10s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%.10s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.10sa", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%.s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%.s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%.s", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.sa", "ABC"));
print_test(".10x"); print_ret(PRINTF_MACRO("%.s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.sa", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%.s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%.s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("%.s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%.s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("a%.sa", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("Simple test\n"));
print_test(".10x"); print_ret(PRINTF_MACRO(""));
print_test(".10x"); print_ret(PRINTF_MACRO("--Format---"));
print_test(".10x"); print_ret(PRINTF_MACRO("\n"));
print_test(".10x"); print_ret(PRINTF_MACRO("%d", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%d", 42));
print_test(".10x"); print_ret(PRINTF_MACRO("%d", 1));
print_test(".10x"); print_ret(PRINTF_MACRO("%d", 5454));
print_test(".10x"); print_ret(PRINTF_MACRO("%d", (int)2147483647));
print_test(".10x"); print_ret(PRINTF_MACRO("%d", (int)2147483648));
print_test(".10x"); print_ret(PRINTF_MACRO("%d", (int)-2147483648));
print_test(".10x"); print_ret(PRINTF_MACRO("%d", (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("\n"));
print_test(".10x"); print_ret(PRINTF_MACRO("%x", 0));
print_test(".10x"); print_ret(PRINTF_MACRO("%x", 42));
print_test(".10x"); print_ret(PRINTF_MACRO("%x", 1));
print_test(".10x"); print_ret(PRINTF_MACRO("%x", 5454));
print_test(".10x"); print_ret(PRINTF_MACRO("%x", (int)2147483647));
print_test(".10x"); print_ret(PRINTF_MACRO("%x", (int)2147483648));
print_test(".10x"); print_ret(PRINTF_MACRO("%x", (int)-2147483648));
print_test(".10x"); print_ret(PRINTF_MACRO("%x", (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("%s", ""));
print_test(".10x"); print_ret(PRINTF_MACRO("%s", "toto"));
print_test(".10x"); print_ret(PRINTF_MACRO("%s", "wiurwuyrhwrywuier"));
print_test(".10x"); print_ret(PRINTF_MACRO("%s", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("\n--Mixed---\n"));
print_test(".10x"); print_ret(PRINTF_MACRO("%d%x%d%x%d%x%d%x\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648));
print_test(".10x"); print_ret(PRINTF_MACRO("-%d-%x-%d-%x-%d-%x-%d-%x-\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648));
print_test(".10x"); print_ret(PRINTF_MACRO("\n"));
print_test(".10x"); print_ret(PRINTF_MACRO("%s%s%s%s\n", "", "toto", "wiurwuyrhwrywuier", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("--1 Flag--\n"));
print_test(".10x"); print_ret(PRINTF_MACRO("d0w %0d %0d %0d %0d %0d %0d %0d %0d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("d4w %4d %4d %4d %4d %4d %4d %4d %4d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("d10w %10d %10d %10d %10d %10d %10d %10d %10d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("d0p %.0d %.0d %.0d %.0d %.0d %.0d %.0d %.0d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("d4p %.4d %.4d %.4d %.4d %.4d %.4d %.4d %.4d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("d10p %.10d %.10d %.10d %.10d %.10d %.10d %.10d %.10d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("x0w %0x %0x %0x %0x %0x %0x %0x %0x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("x4w %4x %4x %4x %4x %4x %4x %4x %4x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("x10w %10x %10x %10x %10x %10x %10x %10x %10x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("x0p %.0x %.0x %.0x %.0x %.0x %.0x %.0x %.0x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("x4p %.4x %.4x %.4x %.4x %.4x %.4x %.4x %.4x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("x10p %.10x %.10x %.10x %.10x %.10x %.10x %.10x %.10x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("s0p ~%.0s` ~%.0s` ~%.0s` ~%.0s` ~%.0s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("s4w ~%4s` ~%4s` ~%4s` ~%4s` ~%4s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("s4p ~%.4s` ~%.4s` ~%.4s` ~%.4s` ~%.4s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("s10w ~%10s` ~%10s` ~%10s` ~%10s` ~%10s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("s10p ~%.10s` ~%.10s` ~%.10s` ~%.10s` ~%.10s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("--2 Flags--\n"));
print_test(".10x"); print_ret(PRINTF_MACRO("d0w0p %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d %0.0d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("x0w0p %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x %0.0x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("--Precision--\n"));
print_test(".10x"); print_ret(PRINTF_MACRO("d0w4p %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d %0.4d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("d0w10p %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d %0.10d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("x0w4p %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x %0.4x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("x0w10p %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x %0.10x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("--Width--\n"));
print_test(".10x"); print_ret(PRINTF_MACRO("d4w0p %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d %4.0d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("d10w0p %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d %10.0d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("x4w0p %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x %4.0x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("x10w0p %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x %10.0x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("s4w0p ~%4.s` ~%4.s` ~%4.s` ~%4.s` ~%4.s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("s10w0p ~%10.0s` ~%10.0s` ~%10.0s` ~%10.0s` ~%10.0s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("--Width and Precision--\n"));
print_test(".10x"); print_ret(PRINTF_MACRO("d10w4p %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d %10.4d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("d10w10p %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d %10.10d\n", 0, 1, 42, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("d4w4p %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d %4.4d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("d4w10p %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d %4.10d\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("x10w4p %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x %10.4x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("x10w10p %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x %10.10x\n", 0, 1, 42, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("x4w4p %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x %4.4x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("x4w10p %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x %4.10x\n", 0, 42, 1, 4554, 2147483647, (int)2147483648, (int)-2147483648, (int)-2147483649));
print_test(".10x"); print_ret(PRINTF_MACRO("s10w4p ~%10.4s` ~%10.4s` ~%10.4s` ~%10.4s` ~%10.4s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("s10w10p ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("s4w4p ~%4.4s` ~%4.4s` ~%4.4s` ~%4.4s` ~%4.4s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));
print_test(".10x"); print_ret(PRINTF_MACRO("s4w10p ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s` ~%10.10s`\n", "", "toto", "0123456789", "tjehurthteutuiehteute", NULL));