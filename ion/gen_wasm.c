char *gen_buf = NULL;

#define genf(...) buf_printf(gen_buf, __VA_ARGS__)
#define genlnf(...) (genln(), genf(__VA_ARGS__))

void gen_all(void) {
    gen_buf = NULL;
    genf("%s", "(module\n  ");
    genf("%s", "(func (result i32)\n    ");
    genf("%s", "(i32.const 42)\n  )\n  ");
    genf("%s", "(export \"helloWorld\" (func 0))\n)\n");
}