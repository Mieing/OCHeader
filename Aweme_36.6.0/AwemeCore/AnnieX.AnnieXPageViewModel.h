@class _TtC6AnnieX21AnnieXNavBarViewModel, _TtC6AnnieX15AnnieXPageModel;

@interface AnnieX.AnnieXPageViewModel : AnnieX.AnnieXBaseViewModel {
    void /* unknown type, empty encoding */ __rts__errorViewModel;
    void /* unknown type, empty encoding */ __rts__loadingViewModel;
    void /* unknown type, empty encoding */ __rts__navBarViewModel;
    void /* unknown type, empty encoding */ __rts__pageCoordinator;
    void /* unknown type, empty encoding */ _pageState;
}

@property (nonatomic, readonly) _TtC6AnnieX21AnnieXNavBarViewModel *navBarViewModel;
@property (nonatomic, readonly) _TtC6AnnieX15AnnieXPageModel *pageModel;
@property (nonatomic, readonly) id /* block */ navigationBarHidden;
@property (nonatomic, readonly) id /* block */ navigationBarTitleColor;
@property (nonatomic, readonly) id /* block */ navigationBarTitle;
@property (nonatomic, readonly) id /* block */ navigationBackgroundColor;
@property (nonatomic, readonly) id /* block */ navigationBarLeftItems;
@property (nonatomic, readonly) id /* block */ navigationBarRightItems;

- (void)onViewAppeared;
- (void)onViewDisappeared;
- (BOOL)getBlockBackPress;
- (void)setStatusFontMode:(int)a0;
- (void)updateBlockBackPress:(BOOL)a0;
- (BOOL)sendBackPressEventIfNeeded;
- (void)setVisibleOfErrorView:(BOOL)a0;
- (void)showLoading:(id)a0 :(BOOL)a1;
- (void)hideLoading:(BOOL)a0;
- (void)setShouldFullScreen:(BOOL)a0;
- (void)setStatusBarBackgroundColor:(id)a0;
- (void)setBgColor;
- (void)updateSystemStatusBar;
- (void)setNavigationBarBackgroundColor:(id)a0;
- (void)setNavigationBarLeftItems:(id)a0;
- (void)setNavigationBarRightItems:(id)a0;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (void)setTitleColor:(id)a0;
- (void)setStatusBarHidden:(BOOL)a0;
- (void)setNavigationBarTitle:(id)a0;
- (void)loadView;
- (void)setNavigationBarHidden:(BOOL)a0;
- (void)reloadView;

@end
