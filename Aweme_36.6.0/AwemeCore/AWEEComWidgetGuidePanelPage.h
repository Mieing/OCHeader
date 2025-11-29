@class UIImageView, DUXVacantView, UILabel, DUXLoadingParticleView, AWEEComWidgetGuideContentPage;
@protocol AWEEComWidgetGuidePanelPageDelegate;

@interface AWEEComWidgetGuidePanelPage : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *closeBtn;
@property (retain, nonatomic) DUXVacantView *errorView;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (retain, nonatomic) AWEEComWidgetGuideContentPage *contentView;
@property (weak, nonatomic) id<AWEEComWidgetGuidePanelPageDelegate> delegate;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) long long currentIndex;

- (void)closeAction:(id)a0;
- (void)setupMask;
- (void)hideErrorPage;
- (void)hideContentPage;
- (void)showErrorPage;
- (void)showContentPage;
- (void)notAddAction;
- (void)goHomeAction;
- (void)nextStepBtnClickAction;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)retryAction;
- (void)startLoading;
- (void)stopLoading;
- (void)setupView;

@end
