@class HTSEventContext, IESLiveInteractFeedbackViewModel, NSString, IESLiveComponentContext, IESLiveInteractFeedbackAPI, IESLiveAudienceInteractFinishPopupView;
@protocol IESLiveRoomService, IESLiveInteractionLinkerService;

@interface IESLiveInteractFeedbackComponent : IESLiveInteractComponentBase <IESLiveInteractFeedbackRouter, IESLiveInteractionLinkerServiceAction>

@property (retain, nonatomic) IESLiveInteractFeedbackAPI *feedbackAPI;
@property (retain, nonatomic) IESLiveInteractFeedbackViewModel *feedbackViewModel;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) IESLiveComponentContext *componentContext;
@property (weak, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) BOOL selectedFeedback;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (weak, nonatomic) IESLiveAudienceInteractFinishPopupView *finishPopupView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentUnmount;
- (BOOL)isRealTimeChorus;
- (unsigned long long)uilayout;
- (void)interactionLinkerService:(id)a0 didCloseWithContext:(id)a1;
- (void)interactionLinkerService:(id)a0 onReceivedKickout:(id)a1;
- (void)componentBindContext;
- (void)uploadFeedbackWithCategoryName:(id)a0 content:(id)a1;
- (void)prefetchFeedbackListModelIfNeeded;
- (unsigned long long)subscene;
- (unsigned long long)feedbackIssueCategoriesCount;
- (void)showAnchorEndInteractFeedbackViewWithCompletion:(id /* block */)a0;
- (void)guestPopupFeedbackView:(BOOL)a0 confirmAction:(id /* block */)a1;
- (void)guestPopupFeedbackView:(BOOL)a0 confirmAction:(id /* block */)a1 dismissAction:(id /* block */)a2;
- (BOOL)isRadioChatRoom;
- (void)trackFeedbackUploaded;
- (void)trackFeedbackConfirmClick;
- (void)trackFeedbackViewShow;
- (void).cxx_destruct;
- (BOOL)isAnchor;

@end
