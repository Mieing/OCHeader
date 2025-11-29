@class UIImageView, CreateInfoResponse_Banner;

@interface IESLiveGuideBannerViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CreateInfoResponse_Banner *bannerData;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ accessibilityFocusBlock;
@property (copy, nonatomic) id /* block */ accessibilityLoseFocusBlock;
@property (nonatomic) BOOL isFocus;

- (void)tapBanner;
- (void)updateBannerData:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (void)setupUI;

@end
