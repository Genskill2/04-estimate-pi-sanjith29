float wallis_pi(int count){
    float pi = 1.0;
    for (int i = 1; i < count; i++){
        float num = 4.0 * i * i;
        pi *= num / (num - 1);
    }
    return pi * 2;
}
