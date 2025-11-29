@class BDPBufferedDuplex;
@protocol BDPTransform, BDPInputStream;

@interface BDPPipeInput : NSObject <BDPInputStream> {
    id<BDPInputStream> _source;
    BDPBufferedDuplex *_buffer;
    id<BDPTransform> _transform;
}

- (long long)read:(void *)a0 size:(unsigned long long)a1;
- (id)init:(id)a0 with:(id)a1;
- (void).cxx_destruct;

@end
