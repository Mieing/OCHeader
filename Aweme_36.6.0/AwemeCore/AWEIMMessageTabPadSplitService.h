@class NSString, NSMapTable, AWEIMMessageTabPadSplitSecondaryContainerView, NSLock, UIViewController;
@protocol AWEIMMessageTabPadSplitSecondaryViewController, AWEIMMessageTabPadSplitMainViewController, AWEIMMessageTabPadSplitConfig;

@interface AWEIMMessageTabPadSplitService : HTSService <AWEUserMessage, AWEIMMessageTabPadSplitService>

@property (nonatomic) BOOL enablePadSplit;
@property (nonatomic) struct CGSize { double width; double height; } rootViewSize;
@property (weak, nonatomic) UIViewController *rootVC;
@property (weak, nonatomic) UIViewController<AWEIMMessageTabPadSplitMainViewController> *mainVC;
@property (retain, nonatomic) AWEIMMessageTabPadSplitSecondaryContainerView *secondaryContainerView;
@property (weak, nonatomic) UIViewController<AWEIMMessageTabPadSplitSecondaryViewController> *secondaryVC;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) id<AWEIMMessageTabPadSplitConfig> config;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMapTable *viewFrameCache;
@property (nonatomic) long long rotatabilityFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (struct CGSize { double x0; double x1; })mainViewSize;
- (struct CGSize { double x0; double x1; })secondaryViewSize;
- (BOOL)tryShowSecondaryVC:(id)a0;
- (BOOL)isSplittingSecondaryVC:(id)a0;
- (BOOL)closeSecondaryVC;
- (BOOL)closeSecondaryVCByBizID:(id)a0;
- (BOOL)tryCloseIfIsSecondaryVC:(id)a0;
- (BOOL)isIMTab:(id)a0;
- (BOOL)checkIfFrameSizeChanged:(id)a0;
- (id)fetchFrameSizeChangeResult:(id)a0;
- (id)secondaryVCToHandlePanGesture:(id)a0 direction:(unsigned long long)a1;
- (BOOL)belongsToSecondaryView:(id)a0;
- (void)changeRootVCRotatability:(BOOL)a0;
- (BOOL)rootVCCanRotate;
- (void)registerMainVC:(id)a0 rootVC:(id)a1;
- (id)findMessageVCIfExit:(id)a0;
- (id)findMessageVCInParentVC:(id)a0;
- (void)didFinishLogout;
- (BOOL)p_computeEnableFlag;
- (void)handleTabbarItemDidChange:(id)a0;
- (void)p_handleRootViewSizeChanged;
- (double)p_mainVCWidth;
- (void)p_checkIfUserIDChanged;
- (BOOL)p_checkRootVCRotate;
- (BOOL)p_secondaryVC:(id)a0 isEqualTo:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewWillLayoutSubviews;

@end
