@class WCAdFinderDialogBaseInfo, WCAdFinderDialogCloseBarView, WCFinderJumpInfoParams, NSString, WCAdFinderDialogContainView, WCAdFinderDialogClickManager;

@interface WCAdFinderDialogViewController : MMUIHalfScreenViewController <WCFinderHalfScreenProtocol, WCFinderFeedBaseViewControllerProtocol, WCAdFinderDialogContainViewDelegate>

@property (retain, nonatomic) WCAdFinderDialogBaseInfo *dialogInfo;
@property (retain, nonatomic) WCFinderJumpInfoParams *jumpParams;
@property (nonatomic) double heightRatio;
@property (retain, nonatomic) WCAdFinderDialogContainView *dialogContainView;
@property (retain, nonatomic) WCAdFinderDialogCloseBarView *closeBarView;
@property (retain, nonatomic) WCAdFinderDialogClickManager *clickManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDialogInfo:(id)a0 jumpParams:(id)a1;
- (void)commonInit;
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)viewDidTransitionToNewSize;
- (double)getMaxHalfScreenHeight;
- (BOOL)useTransparentNavibar;
- (BOOL)needCloseOnOrientationChanged;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateCommonUI;
- (void)onDialogContainViewScrollViewDidScroll;
- (void)onDialogContainViewScrollViewDidEndScrolling;
- (void)onDialogContainViewConfirmButtonDidClick;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (BOOL)isHideBorderShadow;
- (BOOL)isHideBackgroupMask;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)a0;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void).cxx_destruct;

@end
