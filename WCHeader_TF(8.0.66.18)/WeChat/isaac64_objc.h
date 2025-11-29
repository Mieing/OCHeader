@interface isaac64_objc : NSObject {
    unsigned long long randrsl[256];
    unsigned long long randcnt;
    unsigned long long mm[256];
    unsigned long long aa;
    unsigned long long bb;
    unsigned long long cc;
}

- (id)init;
- (unsigned long long)isaac64_rand;
- (int)isaac64_init:(unsigned long long *)a0 seedLen:(unsigned long long)a1;
- (void)isaac64;
- (void)randinit:(int)a0;

@end
