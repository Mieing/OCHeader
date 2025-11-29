@class WCFinderFollowBtnViewModel, WCFinderFollowBtnConfig;

@interface WCFinderFollowButton : WCFinderMaskButton

@property (retain, nonatomic) WCFinderFollowBtnViewModel *viewModel;
@property (retain, nonatomic) WCFinderFollowBtnConfig *config;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)setupObserver;
- (void)dealloc;
- (void)updateWithContact:(id)a0;
- (void)_updateUI;
- (void)onClickSelf;
- (void).cxx_destruct;

@end
