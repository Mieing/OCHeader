@protocol BDPOutputStream;

@interface BDPCompressor : NSObject <BDPTransform> {
    struct { char *dst_ptr; unsigned long long dst_size; char *src_ptr; unsigned long long src_size; void *state; } _stream;
    BOOL _destroy_on_dealloc;
    id<BDPOutputStream> _dest;
}

+ (id)compressor:(int)a0 to:(id)a1;
+ (BOOL)decompress:(id)a0 to:(id)a1 algorithm:(int)a2;

- (id)init:(int)a0 op:(int)a1;
- (void).cxx_destruct;
- (BOOL)finish;
- (void)dealloc;
- (BOOL)write:(const void *)a0 size:(unsigned long long)a1;
- (BOOL)_process:(int)a0;
- (void)setDest:(id)a0;

@end
