@class NSString, PIAMMKVStorage, NSRecursiveLock;

@interface PIASnapShotFunctionPlugin : NSObject <PIAFunctionPlugin>

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) double lastTrimTime;
@property (nonatomic) long long minTrimTime;
@property (retain, nonatomic) PIAMMKVStorage *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAfterPrepareTask;
+ (unsigned long long)pluginMode;
+ (void)addSnapShotHitPVEvent:(long long)a0 engine:(id)a1;
+ (void)addSnapShotEnabledPVEvent:(BOOL)a0 engine:(id)a1;

- (void)engine:(id)a0 onLoadStart:(id)a1;
- (void)engine:(id)a0 onURLChange:(id)a1;
- (void)initDataBase;
- (void)setupWithURL:(id)a0 webView:(id)a1;
- (void)injectBridgeAPI:(id)a0;
- (BOOL)saveSnapShotWithModel:(id)a0 error:(id *)a1;
- (BOOL)removeSnapShotWithModel:(id)a0 error:(id *)a1;
- (void)asyncTrimExpiresSnapShot;
- (id)findSnapShotWithURL:(id)a0 version:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;

@end
