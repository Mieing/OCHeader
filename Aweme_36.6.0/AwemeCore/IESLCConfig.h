@class NSDictionary;

@interface IESLCConfig : NSObject

@property (nonatomic) BOOL enableConnectRatePlugin;
@property (nonatomic) BOOL enableTrackConnectRate;
@property (nonatomic) BOOL enableReconnectPlugin;
@property (copy, nonatomic) id /* block */ hasLoginBlock;
@property (copy, nonatomic) NSDictionary *settingsConfig;
@property (nonatomic) BOOL supportMultiInstance;

- (BOOL)p_enableOptWatchDog;
- (BOOL)p_canTrackConnectRateAfterClose;
- (BOOL)p_enableTrackConnectError;
- (void)configSettings;
- (BOOL)p_enableOnlineRatePlugin;
- (BOOL)p_enableTrackMsg;
- (BOOL)p_enableALogMsg;
- (BOOL)p_enableTrackMsgElaspedTimeDetail;
- (long long)p_onlineRateInterval;
- (BOOL)p_enableTrackOnlineError;
- (BOOL)p_didActiveReconnect;
- (BOOL)p_enableReconnectWhenNetworkChanged;
- (long long)p_reconnectAfterConnectingLongTime;
- (BOOL)p_connectAfterClose;
- (BOOL)p_reconnectAfterFailure;
- (void).cxx_destruct;
- (id)init;

@end
