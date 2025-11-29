@class IESLCConnectRatePlugin, IESLCOnlineRatePlugin, IESLCReconnectPlugin, IESLCPushConfig, IESLCConfig;
@protocol IESLCPushManagerProtocol, IESLCPushMessageReceiverProtocol, IESLCConnectManagerProtocol, IESLCMessageHandlerProtocol;

@interface IESLCFactory : NSObject

@property (retain, nonatomic) id<IESLCPushMessageReceiverProtocol> pushMessageReceiver;
@property (retain, nonatomic) id<IESLCPushManagerProtocol> pushManager;
@property (retain, nonatomic) IESLCConfig *lcConfig;
@property (retain, nonatomic) IESLCConnectRatePlugin *connectRatePlugin;
@property (retain, nonatomic) IESLCOnlineRatePlugin *onlineRatePlugin;
@property (retain, nonatomic) IESLCReconnectPlugin *reconnectPlugin;
@property (retain, nonatomic) IESLCPushConfig *lcPushConfig;
@property (retain, nonatomic) id<IESLCConnectManagerProtocol> connectManager;
@property (retain, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

+ (id)pushConfig;
+ (id)config;
+ (id)sharedInstance;

- (void)configLaunchTime:(id)a0;
- (void)createWithConfig:(id)a0;
- (void).cxx_destruct;

@end
