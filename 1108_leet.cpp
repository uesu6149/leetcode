class Solution {
public:
    string defangIPaddr(string address) {
        const char* tmp = address.c_str();
        char buf[64];
        int idx = 0;
        
        while (*tmp != NULL) {
            if (*tmp == '.') {
                buf[idx++] = '[';
                buf[idx++] = '.';
                buf[idx++] = ']';
            }
            else {
                buf[idx++] = *tmp;    
            }
            tmp++;
        }
       // buf[idx] = '¥';
        
        string result = buf;
        
        return result;
    }
};

