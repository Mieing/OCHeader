@interface BDPFileInputStream : NSObject <BDPInputStream> {
    int _fd;
}

- (long long)read:(void *)a0 size:(unsigned long long)a1;
- (id)init:(int)a0;
- (void)dealloc;

@end
