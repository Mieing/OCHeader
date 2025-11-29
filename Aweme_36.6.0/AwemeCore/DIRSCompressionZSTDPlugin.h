@class NSString, DIRSContext;

@interface DIRSCompressionZSTDPlugin : DIRSBasicModule <IRISDataCoder> {
    struct ZSTD_CCtx_s { } *cctx;
    struct ZSTD_CDict_s { } *zstdDict;
    BOOL usingDict;
    int compressionLevel;
    int enc;
}

@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;

- (id)requiredHTTPHeaderFields;
- (id)encodedData:(id)a0 options:(id)a1 error:(id *)a2;
- (id)algorithm;
- (void)commonInit;
- (void)setOptions:(id)a0;

@end
