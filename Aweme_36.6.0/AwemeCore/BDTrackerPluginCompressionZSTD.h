@class NSString;

@interface BDTrackerPluginCompressionZSTD : NSObject <BDTrackerPluginCompression> {
    struct ZSTD_CCtx_s { } *cctx;
}

@property (nonatomic) BOOL compressUsingDict;
@property (nonatomic) int compressionLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadBundleDict;
+ (void)registerDict:(id)a0;
+ (void)disableHoldContext:(BOOL)a0;
+ (id)pluginVersion;
+ (void)initialize;
+ (id)plugin;

- (void)_ensureContext;
- (id)dataUsingCompress:(id)a0 error:(id *)a1;
- (void)performance:(BOOL)a0 encodeType:(long long)a1 cost:(double)a2 inputLength:(unsigned long long)a3 outputLenght:(unsigned long long)a4;
- (id)init;
- (void)setParameters:(id)a0;
- (void)freeContext;

@end
