@class NSString;

@interface IESMMEffectHelper : NSObject <BCAABundleListener, IESMMEffectHelperProtocol> {
    id /* block */ _didLoadBlock;
}

@property (nonatomic) int logLevel;
@property (nonatomic) BOOL enableLog;
@property (nonatomic) BOOL effectLoaded;
@property (nonatomic) BOOL lazyEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (void)bundleDidLoaded:(id)a0 machoHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a1 fromBundle:(id)a2 enterTag:(id)a3 cost:(double)a4;
- (void)setupEffect;
- (void)setEffectDidLoadBlock:(id /* block */)a0;
- (unsigned long long)veTypeFromEffectType:(int)a0;
- (void)setupEffectLogAppLogFunc;
- (void)configRegisterABTest:(id)a0;
- (void)configEffectABValue:(id)a0 key:(id)a1 type:(unsigned long long)a2;
- (void)enableEffectLog:(BOOL)a0;
- (void)setEffectLogLevel:(int)a0;
- (id)getEffectABInfoByKey:(id)a0 type:(unsigned long long)a1;
- (id)effectSDKCommit;
- (id)getEffectVersion;
- (void)setupEffectLogMonitorFunc;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
