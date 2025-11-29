@class NSString, MMPageSheetAdapter, TingFlutterCommentInputController, TingInsertedContentCallBack, NSNumber, UIView;

@interface BrandAudioFlutterController : MMFlutterViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderHalfScreenProtocol, TingCommentInputDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TingFlutterCommentInputController *commentInputController;
@property (weak, nonatomic) MMPageSheetAdapter *brandAdpter;
@property (retain, nonatomic) TingInsertedContentCallBack *callback;
@property (retain, nonatomic) NSNumber *heightRatio;
@property (nonatomic) BOOL bSyncProgress;
@property (nonatomic) BOOL bInShowAnimation;
@property (retain, nonatomic) UIView *shadowView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initProfileCallbackIfNeed:(id)a0;
- (void)initShadowView;
- (void)updateShadowLayer:(BOOL)a0;
- (void)setEnableProfileShadow:(BOOL)a0;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (BOOL)isInAnimation;
- (id)modalProfileViewControllerInHierarchy;
- (void)onBeginShowHalfScreenProfile;
- (void)onShowAnimationDone;
- (void)onEndShowHalfScreenProfile;
- (void)onChangeProfileShadow:(double)a0;
- (void)onChangeProfileShadow:(double)a0 animate:(BOOL)a1;
- (void)listenHalfScreenIsShow:(BOOL)a0 eventType:(unsigned long long)a1;
- (void)listenHalfScreenMoveProgress:(double)a0 heightRatio:(double)a1;
- (unsigned long long)listenHalfScreenOption;
- (id)getCurTargetRatioValue;
- (void)closeProfilePageSheetIfNeed;
- (void)checkNeedRecoverAppearanceBeforeDismiss;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (BOOL)shouldInteractiveDismiss;
- (void)setInteractiveDismissEnable:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)activeCommentInput:(id)a0 result:(id /* block */)a1;
- (void).cxx_destruct;

@end
