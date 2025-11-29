@class NSString, BDUGLuckyRouterContext;

@interface BDUGLuckyCatRouterProxyIntercepter : NSObject <BDUGLuckyRouterIntercepterProtocol>

@property (retain, nonatomic) BDUGLuckyRouterContext *lastRouterContext;
@property (nonatomic) BOOL settingsReady;
@property (copy, nonatomic) NSString *schemaForALog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)intercepterType;
+ (id)sharedInstance;

- (BOOL)canHandleUrl:(id)a0;
- (id)handleUrl:(id)a0;
- (BOOL)isMustBeAwakened;
- (BOOL)isLocalUrl:(id)a0;
- (BOOL)openExternalUrl:(id)a0;
- (void)__onDogSettingsUpdate;
- (id)__buildProxyExtraInfoWithURLString:(id)a0;
- (void)showToastIfNeeded:(id)a0 success:(BOOL)a1;
- (double)__retryTimeout:(id)a0;
- (void)__triggerRetryWithContext:(id)a0 reason:(id)a1;
- (void)__waitingSettingsCompletedWithContext:(id)a0 timeout:(double)a1;
- (void)__triggerRetry;
- (id)__extraParamsWithRetryDisabled:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
