@class NSString, DUXPartialSheet, UIPercentDrivenInteractiveTransition, UIViewController;
@protocol AWEFlowBotMessageViewControllerProtocol, AWEPlayInteractionPanelManagerProtocol;

@interface AWEPlayInteractionFlowPanelPanelController : AWEPlayInteractionNewBaseController <DUXPartialSheetDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, UIAdaptivePresentationControllerDelegate, AWEPlayInteractionFlowPanelPanelControllerProtocol>

@property (nonatomic) BOOL panelShowed;
@property (weak, nonatomic) DUXPartialSheet *partialSheet;
@property (weak, nonatomic) id<AWEPlayInteractionPanelManagerProtocol> panelManager;
@property (nonatomic) double screenHeight;
@property (nonatomic) double sevenSplitScreenHeight;
@property (nonatomic) double videoHeightInShrink;
@property (nonatomic) BOOL isExpanded;
@property (weak, nonatomic) UIViewController<AWEFlowBotMessageViewControllerProtocol> *VC;
@property (retain, nonatomic) UIViewController *containerViewController;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveDismiss;
@property (nonatomic) BOOL isInteractiveDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)partialSheetDidDismiss:(id)a0;
- (void)partialSheet:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (void)partialSheetWillFloded:(id)a0;
- (void)partialSheetWillExpanded:(id)a0;
- (void)partialSheetDidExpanded:(id)a0;
- (void)partialSheetDidClickMaskArea:(id)a0;
- (void)partialSheetWillDismiss:(id)a0;
- (BOOL)partialSheet:(id)a0 gestureRecognizerShouldBegin:(id)a1;
- (BOOL)isPanelShowed;
- (double)getPanelHeight;
- (id)currentInfoForSubUnits;
- (id)currentInfoForUnitWithIdentifier:(id)a0;
- (id)currentInfoForUnitWithClassName:(id)a0;
- (void)setSearchBarHidden:(BOOL)a0 animation:(BOOL)a1;
- (void)trackEnterFullScreen:(id)a0;
- (void)handleRightPan:(id)a0;
- (void)popupWithViewController:(id)a0 params:(id)a1;
- (void)showSharePanel;
- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewWillAppear:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;

@end
