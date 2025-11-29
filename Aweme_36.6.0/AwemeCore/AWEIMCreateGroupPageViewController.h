@class NSString, NSDictionary, AWEIMCreateGroupPageViewControllerModel, UIView, NSHashTable, UIButton;
@protocol AWEIMGroupChatPanelControllerDelegate, IESIMCustomModalTransitionContext, IESIMTextFieldProtocol, IESIMRichButtonProtocol;

@interface AWEIMCreateGroupPageViewController : UIViewController <IESIMCustomModalTransitionVCProtocol, AWEIMCreateGroupPageViewControllerProtocol, AWEIMGroupChatPanelProtocol>

@property (readonly, nonatomic) AWEIMCreateGroupPageViewControllerModel *model;
@property (readonly, nonatomic) NSHashTable *delegates;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIView<IESIMTextFieldProtocol> *groupNameTextField;
@property (readonly, nonatomic) UIButton<IESIMRichButtonProtocol> *cancelButton;
@property (readonly, nonatomic) UIButton<IESIMRichButtonProtocol> *createButton;
@property (readonly, nonatomic) double bottomSafeAreaInset;
@property (nonatomic) BOOL isKeyboardShowing;
@property (weak, nonatomic) id<IESIMCustomModalTransitionContext> transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEIMGroupChatPanelControllerDelegate> groupChatPanelDelegate;
@property (copy, nonatomic) NSDictionary *groupChatTrackDict;

- (id)pullIndicatorRegionBackgroundColor;
- (BOOL)customActionHandlerForAction:(long long)a0;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)__keyboardWillShow:(id)a0;
- (void)__keyboardWillHide:(id)a0;
- (BOOL)needTransferToGroup;
- (void)showGroupChatPanelOnViewController:(id)a0;
- (void)__trackEvent:(id)a0 withParams:(id)a1;
- (void)__updateContainerViewWithKeyBoardHeight:(double)a0 duration:(double)a1 curve:(long long)a2;
- (id)__createConversationWithGroupName:(id)a0;
- (id)__dismissAnimated:(BOOL)a0;
- (void)__textDidChanged:(id)a0;
- (void)__cancelTapped;
- (void)__createTapped:(id)a0;
- (void)addDelegate:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void)dealloc;
- (double)customCornerRadius;

@end
