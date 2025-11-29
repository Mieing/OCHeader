@class NSString;

@interface HTSLiveStreamPcdnManager : NSObject <VeLivePlayerGlobalObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateAppConfig:(id /* block */)a0;
+ (void)updateDolphinConfig;
+ (BOOL)checkLiveStreamPcdnEnable;
+ (void)setAlogCallback;
+ (void)updateLivePlayerAppConfig:(BOOL)a0;
+ (void)configAndStartLiveIO;
+ (void)stop;
+ (void)start;
+ (void)addObserver;
+ (id)shareInstance;

- (void)onMonitorLog:(id)a0 logType:(id)a1;

@end
