@protocol GenerateFileKeyDelegate, CacheModuleInfoDelegate;

@interface HLSProxySettings : NSObject

@property (weak, nonatomic) id<GenerateFileKeyDelegate> generateFileKeyDelegate;
@property (weak, nonatomic) id<CacheModuleInfoDelegate> cacheModuleInfoDelegate;

+ (id)convertToProxyUrl:(id)a0 fileKey:(id)a1 rawKey:(id)a2;
+ (id)sharedInstance;

- (void)onHitHlsCache:(id)a0 type:(int)a1;
- (void)seCacheModuleInfoDelegate:(id)a0;
- (void)setStrOption:(unsigned long long)a0 value:(id)a1;
- (void)setIntOption:(unsigned long long)a0 value:(int)a1;
- (int)getIntOption:(unsigned long long)a0;
- (void)changePreloadTaskRunMode:(id)a0 RunMode:(int)a1;
- (void)setPreloadTaskMaxTaskNum:(id)a0 num:(int)a1;
- (void)pausePreloadTask:(id)a0;
- (void)resumePreloadTask:(id)a0;
- (id)getStrOption:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
