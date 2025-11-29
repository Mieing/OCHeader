@class IESLiveMessageUplinkApi, NSMutableDictionary, NSMutableSet, IESLiveGCDTimer, NSString;
@protocol IESLiveMonitor, IESLiveSettings;

@interface IESLiveMessageUplinkServiceIMP : NSObject <IESLiveSettingsSubscriber, IESLiveMessageUplinkService>

@property (retain, nonatomic) id<IESLiveSettings> settings;
@property (nonatomic) BOOL isUplinkServiceEnable;
@property (nonatomic) long long strategy;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSMutableSet *routeServiceIdSet;
@property (retain, nonatomic) IESLiveMessageUplinkApi *uplinkApi;
@property (retain, nonatomic) IESLiveGCDTimer *timeoutCheckTimer;
@property (retain, nonatomic) NSMutableDictionary *requestMap;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) BOOL timerOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long serviceId;
@property (nonatomic) long long methodId;
@property (copy, nonatomic) id /* block */ isFrontierConnectd;
@property (copy, nonatomic) id /* block */ sendMessageByFrontierChannel;
@property (copy, nonatomic) id /* block */ isLiveConnectd;
@property (copy, nonatomic) id /* block */ sendMessageByLiveChannel;

+ (id)sharedInstance;

- (void)asynSendMessageWith:(id)a0 completion:(id /* block */)a1;
- (void)settingUpdateWithKey:(id)a0 value:(id)a1;
- (void)p_addQueryToParams:(id)a0 fromParams:(id)a1;
- (void)stopTimeoutCheckTimer;
- (void)startTimeoutCheckTimer;
- (void)doTimeoutCheck;
- (void)onUplinkReceivingMessage:(id)a0;
- (id)p_uplinkPacketWith:(id)a0;
- (void)sendByFrontier:(id)a0;
- (void)sendByHttpWith:(id)a0;
- (id)p_keyOfUplinkPacketWith:(id)a0;
- (id)pushMessageWith:(id)a0;
- (BOOL)isValidMessageForUplink:(id)a0;
- (id)errorWithCode:(long long)a0 message:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
