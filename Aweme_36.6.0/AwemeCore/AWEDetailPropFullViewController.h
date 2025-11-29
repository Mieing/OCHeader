@class NSString, AWEDetailNewStyleShootButton, UIView, AWELuckyCatRewardBubbleView, AWEDetailServiceProvider;

@interface AWEDetailPropFullViewController : AWEDetailFullViewController <AWEDetailPropEmptyPageHost> {
    AWEDetailServiceProvider *_serviceProvider;
}

@property (retain, nonatomic) AWELuckyCatRewardBubbleView *rewardView;
@property (nonatomic) BOOL isTrackActionButtonShow;
@property (retain, nonatomic) UIView *actionButtonSnap;
@property (retain, nonatomic) AWEDetailNewStyleShootButton *createButton;
@property (retain, nonatomic) UIView *createButtonSnap;
@property (retain, nonatomic) AWEDetailNewStyleShootButton *friendLoraButton;
@property (readonly, nonatomic) BOOL shouldShowAICreationButton;
@property (retain, nonatomic) AWEDetailNewStyleShootButton *aiCreationButton;
@property (nonatomic) BOOL hasReportAICreationButtonShow;
@property (nonatomic) double appearTimestamp;
@property (nonatomic) BOOL isAppearing;
@property (nonatomic) BOOL isPropPageBottomButtonFixed;
@property (nonatomic) BOOL isAIGCSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedFlameAnchorDOUYINHTSAdapterProtocolClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)setupInjectServiceOnInit;
- (void)registerBusinessHandlersOnInit;
- (void)setupUIOnViewDidLoad;
- (void)bindViewModelOnViewDidLoad;
- (void)handleDetailInfoFetchStateChange;
- (BOOL)shouldUseUnifyStyleErrorView;
- (BOOL)needAmendEmptyAwemeListTip;
- (id)partialSheetSuppressingGestures;
- (void)onActionButtonClicked:(id)a0;
- (BOOL)shouldUseWideStyleActionButton;
- (BOOL)shouldShowFetchLoading;
- (void)updateViewHeightWhileProgress:(double)a0;
- (void)onAICreationButtonClicked:(id)a0;
- (id)aAWEFeedFlameAnchorDOUYINHTSAdapterProtocol;
- (id)emptyViewContainerForHandler:(id)a0;
- (void)aigcViewWillDismiss:(id)a0;
- (void)aiLoraProfileModelDidChange:(id)a0;
- (void)updateActionButtonToUnifyStyle;
- (BOOL)needShowFriendLora;
- (void)updateAIGCFriendLoraButtonLayout;
- (BOOL)needShowCreateAI;
- (void)updateAIGCButtonLayout;
- (void)updateAICreationButtonLayout;
- (void)trackStayTime:(BOOL)a0;
- (void)setupRewardViewIfNeeded;
- (void)resetBottomButtonLayout;
- (void)p_updateSocialCameraActionButton;
- (void)p_updateAIGCCreateButtonLayout;
- (void)trackAICreationButtonShowIfNeeded;
- (void)onCreateButtonClicked:(id)a0;
- (void)onFriendLoraButtonClicked:(id)a0;
- (void)trackAICreationButtonClick;
- (void)p_updateAILoraInfoModelSection;
- (id)getAIGCType;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidEnterBackground:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)serviceProvider;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
