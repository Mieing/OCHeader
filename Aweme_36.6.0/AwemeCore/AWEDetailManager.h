@class UINavigationController, AWEPlayInteractionViewController, DUXPartialSheet, AWEDetailHalfScreenRootViewController, NSString, UIViewController;
@protocol AWEDetailViewControllerProtocol, AWEPlayInteractionAnchorDetailPageHalfScreenPanelControllerProtocol;

@interface AWEDetailManager : NSObject <DUXPartialSheetDelegate, AWEPublishTaskMessage, AWEDetailManagerProtocol>

@property (weak, nonatomic) DUXPartialSheet *sheet;
@property (nonatomic) BOOL isShowed;
@property (nonatomic) BOOL userPaused;
@property (nonatomic) BOOL userPublished;
@property (weak, nonatomic) UINavigationController *sheetNavigationController;
@property (weak, nonatomic) AWEDetailHalfScreenRootViewController *sheetRootViewController;
@property (nonatomic) double frameY;
@property (weak, nonatomic) UIViewController<AWEDetailViewControllerProtocol> *detailViewController;
@property (weak, nonatomic) AWEPlayInteractionViewController *interactionViewController;
@property (weak, nonatomic) id<AWEPlayInteractionAnchorDetailPageHalfScreenPanelControllerProtocol> panelController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)partialSheetDidDismiss:(id)a0;
- (void)partialSheet:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (void)partialSheetWillFloded:(id)a0;
- (void)partialSheetDidFloded:(id)a0;
- (void)partialSheetWillExpanded:(id)a0;
- (void)partialSheetDidExpanded:(id)a0;
- (void)task:(id)a0 didBeginWithInfo:(id)a1;
- (void)partialSheetDidClickMaskArea:(id)a0;
- (void)partialSheetWillDismiss:(id)a0;
- (BOOL)partialSheet:(id)a0 gestureRecognizer:(id)a1 shouldBeRequiredToFailByGestureRecognizer:(id)a2;
- (void)playIfNeeded;
- (void)popUpHalfScreenDetailPageWithHeight:(double)a0 animation:(BOOL)a1;
- (void)dismissSheetAnimated:(BOOL)a0;
- (void)expandSheetWithAnimate:(BOOL)a0;
- (void)shrinkVideoWithHeight:(double)a0 show:(BOOL)a1 animate:(BOOL)a2;
- (void)detailViewControllerDidScrollWithOffset:(double)a0;
- (void)sheetEnableScroll:(BOOL)a0;
- (id)initWithDetailController:(id)a0;
- (void)setPureMode;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)dismissSheet;
- (void)pauseIfNeeded;

@end
