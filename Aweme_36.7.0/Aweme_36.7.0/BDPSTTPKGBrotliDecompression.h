@class NSString;

@interface BDPSTTPKGBrotliDecompression : NSObject <BDPSTTPKGDecompressionProtocol> {
    unsigned long long dstBufferSize;
    char *dstBuffer;
}

@property (nonatomic) struct { char *dst_ptr; unsigned long long dst_size; char *src_ptr; unsigned long long src_size; void *state; } stream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
