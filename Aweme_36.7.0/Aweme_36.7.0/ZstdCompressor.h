@interface ZstdCompressor : NSObject {
    struct ZSTD_CDict_s { } *cdict;
    struct ZSTD_CCtx_s { } *cctx;
}

@property (nonatomic) int compressionLevel;

+ (long long)defaultCompressionLevel;

- (id)compressDataWithData:(id)a0 usingDict:(BOOL)a1 error:(id *)a2;
- (void)setDictioanry:(id)a0;
- (id)init;
- (void)dealloc;

@end
