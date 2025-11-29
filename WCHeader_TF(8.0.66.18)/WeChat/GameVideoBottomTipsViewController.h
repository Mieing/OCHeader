@class UIView;

@interface GameVideoBottomTipsViewController : GameCenterNativeVc {
    UIView *_backgroundView;
}

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)doNothing;
- (BOOL)dismissWhenTapOutside;
- (void)setupOkButton:(id)a0;
- (BOOL)hideOkButton;
- (double)contentHeight;
- (void)setupContentView:(id)a0;
- (void)show:(id)a0;
- (void)close;
- (void)closeWithCompletion:(id /* block */)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)makePartCornerToView:(id)a0 corner:(unsigned long long)a1 radius:(double)a2;
- (void).cxx_destruct;

@end
