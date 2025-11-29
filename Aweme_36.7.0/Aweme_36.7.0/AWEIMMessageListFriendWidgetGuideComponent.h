@class AWEIMFriendWidgetGuideResource, NSString, AWEIMWidgetGuideDemoteHelper, UIView;

@interface AWEIMMessageListFriendWidgetGuideComponent : AWEIMComponentBase <AWEIMSyncPriorityDispatchObjectProtocol, AWEIMMessageListBackgroundAction>

@property (retain, nonatomic) UIView *widgetGuideView;
@property (retain, nonatomic) AWEIMFriendWidgetGuideResource *resource;
@property (retain, nonatomic) AWEIMWidgetGuideDemoteHelper *demoteHelper;
@property (nonatomic) BOOL didMarkDismiss;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void)app_willEnterForeground;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewWillDisappear;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (void)dismissInteractorView:(BOOL)a0;
- (void)p_canShowWidgetGuideViewWithCompletion:(id /* block */)a0;
- (void)guideViewTapped:(id)a0;
- (void)showInteractorView;
- (BOOL)p_canShowWidgetGuide;
- (void).cxx_destruct;
- (BOOL)isDisplaying;

@end
