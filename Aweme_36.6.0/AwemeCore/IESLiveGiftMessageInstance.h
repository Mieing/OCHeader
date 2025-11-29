@class NSString, IESLiveGiftMessageSection;
@protocol IESLiveRebornGiftAnimationProvider, HTSLiveMessageFilterAdapter, IESLiveUserService;

@interface IESLiveGiftMessageInstance : NSObject <HTSLiveMessageSubscriber>

@property (weak, nonatomic) IESLiveGiftMessageSection *messageSection;
@property (nonatomic) BOOL enableReceiveMatchAtmosphereEffectMessage;
@property (weak, nonatomic) id<IESLiveUserService> userService;
@property (weak, nonatomic) id<IESLiveRebornGiftAnimationProvider> provider;
@property (retain, nonatomic) id<HTSLiveMessageFilterAdapter> messageFakedFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveMessage;
- (void)messageReceived:(id)a0 retryCount:(long long)a1;
- (void)didReceiveNewResource:(id)a0 resourceID:(id)a1 retryCount:(long long)a2;
- (void)messageSectionDidLoad;
- (Class)currentObserveMessage;
- (BOOL)bussinessMessageFilter:(id)a0 retryCount:(long long)a1;
- (void)prepareBeforeEnqueueForMessage:(id)a0 completion:(id /* block */)a1;
- (BOOL)resourceIsReadyForMessage:(id)a0 retryCount:(long long)a1;
- (BOOL)needEnqueue:(id)a0;
- (void)p_getMatchAtmosphereEffectSettings;
- (BOOL)commonMessageFilter:(id)a0;
- (void)afterResourceIsReadyForMessage:(id)a0 ready:(BOOL)a1;
- (void)sendNodesFromMessage:(id)a0;
- (id)initWithMessageSection:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
