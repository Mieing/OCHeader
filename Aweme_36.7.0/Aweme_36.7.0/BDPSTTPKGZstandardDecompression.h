@class NSString;

@interface BDPSTTPKGZstandardDecompression : NSObject <BDPSTTPKGDecompressionProtocol> {
    struct ZSTD_DCtx_s { } *decompressionContext;
    unsigned long long buffInSize;
    void *buffIn;
    unsigned long long buffOutSize;
    void *buffOut;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
