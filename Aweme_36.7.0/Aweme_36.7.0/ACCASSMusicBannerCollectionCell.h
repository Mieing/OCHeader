@class UIImageView;
@protocol ACCBannerModelProtocol;

@interface ACCASSMusicBannerCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) id<ACCBannerModelProtocol> model;

+ (id)identifier;

- (void)refreshWithModel:(id)a0;
- (void)refreshWithPlaceholderModel:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
