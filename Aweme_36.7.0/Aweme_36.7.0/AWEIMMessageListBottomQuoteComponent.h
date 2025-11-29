@class AWEIMMessageListLayoutConfig, NSString, UIView, AWEIMFloatingContainerView;
@protocol AWEIMMessageListBottomQuoteViewProtocol;

@interface AWEIMMessageListBottomQuoteComponent : AWEIMComponentBase <AWEIMMessageListBottomQuoteInterface, AWEIMMessageListInputModuleAction, AWEIMMessageListBackgroundAction, AWEIMMessageBaseVCLayoutAction, AWEIMMentionParticipantAction, AWEIMMultiSelectedAction>

@property (retain, nonatomic) AWEIMFloatingContainerView *bottomQuoteContainer;
@property (weak, nonatomic) AWEIMMessageListLayoutConfig *currentAnimation;
@property (weak, nonatomic) id<AWEIMMessageListBottomQuoteViewProtocol> viewHost;
@property (nonatomic) BOOL isManualHidden;
@property (weak, nonatomic) UIView *dismissingView;
@property (weak, nonatomic) UIView *showingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)viewWillAnimateAlongsideTransitionToSizeWith:(struct CGSize { double x0; double x1; })a0;
- (void)createContainerViewIfNeeded;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (void)themeDidReload;
- (void)multiSelectedStateDidChanged:(BOOL)a0;
- (id)layoutService;
- (void)setupBottomContainer;
- (id)inputService;
- (double)p_viewWidth;
- (void)hideCurrentBottomQuoteView:(BOOL)a0;
- (void)showBottomQuoteViewInHost:(id)a0 withConfig:(id)a1;
- (void)dismissBottomQuoteView:(id)a0 withConfig:(id)a1;
- (void)mentionParticipantsStateChangeWithIsShowing:(BOOL)a0;
- (void)updateBottomContainerBackground:(BOOL)a0;
- (void)hideCurrentBottomQuoteView;
- (void)reshowHiddenBottomQuoteView;
- (void).cxx_destruct;
- (id)defaultConfig;
- (void)dealloc;
- (BOOL)isDisplaying;

@end
