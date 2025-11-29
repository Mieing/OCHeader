@class MMUILabel, MMWebImageView;

@interface StoreEmotionBannerSetHeader : UICollectionReusableView

@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;

+ (double)preferredHeightFor:(id)a0 withWidth:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)updateWith:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
