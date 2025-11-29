@class AWEGrouponLifeFeedsLoadMoreComponentVM, AWEGrouponAttributedLabel, DUXLoadingParticleView, UILabel, BDImageView;

@interface AWEGrouponLifeFeedsLoadMoreComponentView : AWEGrouponLifeFeedsBaseComponentView

@property (readonly, nonatomic) AWEGrouponLifeFeedsLoadMoreComponentVM *loadMoreViewModel;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) AWEGrouponAttributedLabel *attrLabel;
@property (retain, nonatomic) BDImageView *loadingImageView;

- (void)bindViewModel:(id)a0;
- (void)trackFooterEventWithName:(id)a0;
- (void)landingTabWithTabID:(long long)a0;
- (void)updateLoadingImage;
- (void).cxx_destruct;
- (void)updateState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
