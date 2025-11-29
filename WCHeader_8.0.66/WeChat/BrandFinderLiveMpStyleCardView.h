@class MMWebImageView;

@interface BrandFinderLiveMpStyleCardView : BrandFinderLiveBaseCardView

@property (retain, nonatomic) MMWebImageView *backgroundCoverImageView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)configLiveOverView;
- (void)configShadowStyle:(id)a0;
- (void)layoutSubviews;
- (void)updateViewModel:(id)a0;
- (void)updateLiveStatus:(BOOL)a0 statusWording:(id)a1;
- (void)updateRecommendReason:(id)a0;
- (void)updateRecommendReasonLabelDisplay;
- (void)loadData;
- (void)updateLiveStatusViewDisplay;
- (double)titleMaxWidth;
- (void).cxx_destruct;

@end
