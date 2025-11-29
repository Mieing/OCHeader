@class NSString, NSMutableDictionary;

@interface IESLiveAioLinkRegisterMessageService : IESLiveGeneralBaseService <HTSLiveMessageSubscriber, IESLivePreStreamIMMessageSubscriber, IESLiveDataSyncDelegate, IESLiveAioLinkRegisterMessage>

@property (retain, nonatomic) NSMutableDictionary *methodToRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (id)initWithDIContext:(id)a0;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (id)registerMessage:(id)a0;
- (id)registerMessage:(id)a0 messageRequestType:(long long)a1;
- (id)getTrueMethodRequestKey:(id)a0 wrdsSubkey:(id)a1;
- (Class)buildMessageClass:(id)a0;
- (void)sendValueForRequestsWithMethodName:(id)a0 message:(id)a1;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
