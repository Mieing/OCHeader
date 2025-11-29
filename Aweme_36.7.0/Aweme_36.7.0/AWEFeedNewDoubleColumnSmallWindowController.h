@class AWEDCFeedBaseController, AWEFeedNewDoubleColumnSmallWindowViewController, NSString;
@protocol AWEFeedNewDoubleColumnSwitchToSingleWithCoverControllerProtocol;

@interface AWEFeedNewDoubleColumnSmallWindowController : AWEDCFeedBaseController <AWEFeedNewDoubleColumnSmallWindowViewControllerDelegate, AWEFeedNewDoubleColumnSmallWindowControllerProtocol>

@property (retain, nonatomic) AWEFeedNewDoubleColumnSmallWindowViewController *smallViewController;
@property (weak, nonatomic) AWEDCFeedBaseController<AWEFeedNewDoubleColumnSwitchToSingleWithCoverControllerProtocol> *switchController;
@property (nonatomic) BOOL shouldShowSettingIcon;
@property (nonatomic) BOOL isSmallWindowShowing;
@property (nonatomic) double startShowTime;
@property (nonatomic) BOOL hasClosed;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getDefaultCoverFrameInRootViewController;

- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)exitContainerWithModel:(id)a0;
- (void)enterContainerWithModel:(id)a0;
- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)getSmallWindowVC;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCoverFrameInRootViewController;
- (id)getPinchTargetView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pinchTargetViewFrame;
- (BOOL)shouldRemoveSmallWindow;
- (void)updateSmallWindowWithFeedPlayer;
- (void)trackSmallWindowStayTimeWithModel:(id)a0 WithReason:(id)a1;
- (void)trackSmallWindowShowWithModel:(id)a0 WithReason:(id)a1;
- (void)smallWindowClickCloseButton;
- (void)smallWindowTap;
- (void)smallWindowManualExpand;
- (void)smallWindowFold;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)containerViewDidLoad;

@end
