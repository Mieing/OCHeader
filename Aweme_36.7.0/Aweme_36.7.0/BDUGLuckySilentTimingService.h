@class NSMutableArray;

@interface BDUGLuckySilentTimingService : NSObject

@property (nonatomic) double lastRequestTs;
@property (nonatomic) double requestIntervalTs;
@property (retain, nonatomic) NSMutableArray *tokens;

+ (void)__sdkSettingsUpdate;
+ (void)startupSilentTimingModule;
+ (id)sharedInstance;

- (void)__appendSilentTimingTokens:(id)a0;
- (void)__saveTokens;
- (void)__startSilentTiming:(id)a0;
- (void)__tryStartSilentTiming;
- (void)__recoverTokensFromCache;
- (void)__getTimerTaskInfoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationWillEnterForeground;
- (void)dealloc;

@end
