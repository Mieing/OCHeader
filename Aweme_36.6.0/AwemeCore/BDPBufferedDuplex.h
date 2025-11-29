@class NSMutableData;

@interface BDPBufferedDuplex : NSObject <BDPInputStream, BDPOutputStream> {
    NSMutableData *_buffer;
    unsigned long long _pos;
}

- (long long)read:(void *)a0 size:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)data;
- (BOOL)write:(const void *)a0 size:(unsigned long long)a1;

@end
