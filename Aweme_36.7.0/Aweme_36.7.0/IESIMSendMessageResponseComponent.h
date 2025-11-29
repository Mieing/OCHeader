@class NSArray, NSString, HMDThreadSafeDictionary, AWEIMComponentManager;
@protocol IESIMDidSendMessageAction;

@interface IESIMSendMessageResponseComponent : AWEIMComponentBase <IESIMSendMessageResponseInterface, AWEIMComponentLazyCreate, AWEIMComponentContainer, AWEIMComponentManagerDependency, IESIMUserServiceMessage>

@property (retain) HMDThreadSafeDictionary *senderMaps;
@property (weak, nonatomic) NSArray *businessAspect;
@property (weak, nonatomic) id<IESIMDidSendMessageAction> publisher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

+ (id)lazyComponentWakeupInterface;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)p_commonBizTrackerParams:(id)a0;
- (void)sendControllerDidSendMessage:(id)a0;
- (void)sendControllerDidResendMessage:(id)a0;
- (void)sendControllerDidReceiveSendMessageResponse:(id)a0 message:(id)a1 conversation:(id)a2 params:(id)a3 user:(id)a4 isTimeout:(BOOL)a5;
- (id)p_appendResult:(id)a0 fromParams:(id)a1;
- (id)p_paramsFromMessage:(id)a0;
- (id)p_paramsFromAllAspect:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
