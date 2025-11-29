@class WCFinderFeedContentVM, UIView;

@interface WCFinderPlayRateOperationView : UIView

@property (copy, nonatomic) id /* block */ shownAction;
@property (copy, nonatomic) id /* block */ dismissAction;
@property (copy, nonatomic) id /* block */ selectAction;
@property (weak, nonatomic) UIView *maskBGView;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showOnView:(id)a0 withVM:(id)a1;
- (void)onDismiss;
- (void)onReportPlayRateResult:(double)a0;
- (void)onDismissAction;
- (void)onPlayRate:(id)a0;
- (void)onShown:(id /* block */)a0;
- (void)onDismiss:(id /* block */)a0;
- (void)onSelect:(id /* block */)a0;
- (BOOL)isInShowingState;
- (void)handleEnterBackgroundEvent;
- (void)addObserver;
- (void)removeObserver;
- (void)onEnterBackground:(id)a0;
- (void)onResignActive:(id)a0;
- (void).cxx_destruct;

@end
