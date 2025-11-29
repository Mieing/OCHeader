@class HTSEventContext, IESLiveAuthorizationApi, NSString, IESLiveComponentContext, HTSLiveAuthorizationNotifyMessage;
@protocol IESLiveRoomService, IESLiveAuthorizationControllerProvider, IESLiveAuthorizationReaction;

@interface IESLiveAuthorizationViewModel : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) IESLiveAuthorizationApi *api;
@property (retain, nonatomic) id<IESLiveAuthorizationControllerProvider> authorizationService;
@property (retain, nonatomic) HTSLiveAuthorizationNotifyMessage *authMessage;
@property (weak, nonatomic) id<IESLiveAuthorizationReaction> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkAndShowAuthorizationGuideWithSource:(unsigned long long)a0 completeBlock:(id /* block */)a1;
- (void)p_setup;
- (void)closeAuthorizationGuideTopViewWithSource:(id)a0;
- (id)initWithRoomModel:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)checkAuthorizationGuideWithSource:(unsigned long long)a0 completeBlock:(id /* block */)a1;
- (id)sourceFromSource:(unsigned long long)a0;
- (BOOL)p_shouldShowAuthorizationGuideTopViewWithSource:(id)a0;
- (BOOL)canShowAuthorizationGuide;
- (void)me_addView;
- (void)dispatchFakeMessage;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
