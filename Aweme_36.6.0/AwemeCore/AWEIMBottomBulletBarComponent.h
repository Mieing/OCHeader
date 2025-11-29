@class NSString, UIView;
@protocol IESIMBulletContainerProtocol, AWEIMMessageListBottomFloatingInterface, IESIMActionInfoProtocol;

@interface AWEIMBottomBulletBarComponent : AWEIMComponentBase <AWEIMBottomBulletViewInterface, IESIMBulletContainerLifeCycleDelegate, AWEIMFloatingViewDispatchProtocol, AWEIMMessageListBottomFloatingViewProtocol, IESIMUserDetailViewControllerMessage>

@property (retain, nonatomic) UIView<IESIMBulletContainerProtocol> *bulletView;
@property (retain, nonatomic) id<IESIMActionInfoProtocol> actionInfo;
@property (nonatomic) BOOL isDisplaying;
@property (weak, nonatomic) id<AWEIMMessageListBottomFloatingInterface> bottomFloatingService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showInFloatMode;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)viewToDisplayInBottomContainer;
- (BOOL)canShowBarWhenInputTypeChangedTo:(long long)a0;
- (void)userDetailViewControllerDeallocNotify:(id)a0 paramDict:(id)a1;
- (void)registerBottomBulletBarWithActionInfo:(id)a0;
- (void)hideBottomBulletBar;
- (void)didNotReceiveActionInfo:(BOOL)a0;
- (BOOL)__shouldShowBottomBulletBar;
- (void)__loadBottomBulletBar;
- (long long)__getEnterFromWithConversation:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
