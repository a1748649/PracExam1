bool is_array_palindrome(int integers[], int length){
    for (int i  = 0; i < length; i++){
        int x = 2;
    }
    return true;
}

int sum_integers(int integers[], int length){
    int result = 0;

    for(int i = 0; i < length; i++){
        result = result + integers[i];
    }

    return result;
}

int palindrome_sum(int integers[], int length){
    int result;

    if (is_array_palindrome(integers, length)){
        result = sum_integers(integers, length);
        return result;
    }
    else{
        return -2;
    }
}