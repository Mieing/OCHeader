@class NSString, TTPushManager, TTPushConfig;

@interface BDUGFrontierManager : NSObject <WsDelegate>

@property (retain, nonatomic) TTPushConfig *pushConfig;
@property (retain, nonatomic) TTPushManager *pushManager;
@property (retain, nonatomic) NSString *requestParamURL;
@property (nonatomic) BOOL hasStopConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setUpdateFrontierSettingLimitTime:(double)a0;
+ (id)sharedInstance;

- (void)onSessionIDChange:(id)a0;
- (void)onTokenChange:(id)a0;
- (void)requestFrontierSetting;
- (BOOL)isUpdateFrontierSetting;
- (BOOL)configTTPushWithJson:(id)a0;
- (void)startTTPushManagerWithLocalCache;
- (BOOL)isConfigTTPushWithCache;
- (BOOL)isCachedWithKey:(id)a0;
- (void)onFrontierMessageReceived:(id)a0 message:(id)a1;
- (void)onFeedbackLog:(id)a0 feedbacklog:(id)a1;
- (void)onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 error:(id)a3;
- (void)onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (int)networkState;

@end
