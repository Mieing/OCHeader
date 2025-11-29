@class UIView, NSString, AWEIMGroupShareCommandTokenProvider, UINavigationController, NSDictionary, UIPanGestureRecognizer, AWEIMHalfScreenContactViewController, AWEIMHalfScreenCurrentGroupViewController, AWEIMMessageConversation, IESIMHalfScreenAccessibilityMaskView;
@protocol AWEIMGroupChatPanelControllerDelegate;

@interface AWEIMHalfScreenBaseViewController : UIViewController <AWERouterViewControllerProtocol, UIGestureRecognizerDelegate, AWEIMHalfScreenContactViewControllerDelegate, IESIMHalfScreenGroupShareCommandViewControllerShareDelegateProtocol, AWEIMInAppPushProtocol, AWEIMGroupChatPanelProtocol>

@property (retain, nonatomic) IESIMHalfScreenAccessibilityMaskView *maskView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (retain, nonatomic) UINavigationController *innerNaviController;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (retain, nonatomic) AWEIMHalfScreenContactViewController *contactVC;
@property (retain, nonatomic) AWEIMHalfScreenCurrentGroupViewController *currentVC;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *conversationId;
@property (retain, nonatomic) AWEIMGroupShareCommandTokenProvider *wechatCommandProvider;
@property (retain, nonatomic) AWEIMGroupShareCommandTokenProvider *qqCommandProvider;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long defaultSelectCount;
@property (nonatomic) BOOL shouldDismiss;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSDictionary *extraTrackInfo;
@property (copy, nonatomic) NSString *groupShareCommandEnterFrom;
@property (copy, nonatomic) NSString *groupCreateSource;
@property (nonatomic) BOOL canShowInnerPush;
@property (nonatomic) BOOL needWechatHeader;
@property (nonatomic) BOOL shouldStickOnTopUser;
@property (retain, nonatomic) NSDictionary *bizExt;
@property (nonatomic) BOOL useUniformStyle;
@property (copy, nonatomic) NSDictionary *paramDict;
@property (weak, nonatomic) id<AWEIMGroupChatPanelControllerDelegate> _groupChatPanelDelegate;
@property (nonatomic) BOOL needFloatModeMessageVC;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ willTransferToMessageVCBlock;
@property (copy, nonatomic) id /* block */ didTransferToFaceToFaceVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEIMGroupChatPanelControllerDelegate> groupChatPanelDelegate;
@property (copy, nonatomic) NSDictionary *groupChatTrackDict;

+ (void)p_registerCustomTransition:(id)a0;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)selfPanned:(id)a0;
- (id)currentTableView;
- (id)stickOnTopUidArray;
- (void)p_dismiss;
- (void)showGroupChatPanelOnViewController:(id)a0;
- (void)p_dismissWithCompletion:(id /* block */)a0;
- (id)__uidStringArrayFromCreateRecommendUsers;
- (id)__uidStringArrayFromRecommendUsers;
- (void)dismissWithHalfScreenContactViewController:(id)a0;
- (void)dismissWithHalfScreenContactViewController:(id)a0 completion:(id /* block */)a1;
- (void)halfScreenContactViewEnterCurrentVC;
- (void)halfScreenContactViewEnterManageFansGroupVC;
- (void)halfScreenContactViewEnterQQVC;
- (BOOL)needSelectStickOnTopItem;
- (BOOL)enableDefaultSelect;
- (BOOL)isInviteFriend;
- (BOOL)isSearching;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;

@end
