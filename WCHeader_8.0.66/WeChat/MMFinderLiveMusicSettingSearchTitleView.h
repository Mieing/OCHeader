@class UIImageView, MMUILabel;

@interface MMFinderLiveMusicSettingSearchTitleView : UIView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *sourceIconImg;
@property (retain, nonatomic) MMUILabel *sourceLabel;

+ (double)preferWidth;
+ (double)preferHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutTitleLabel;
- (void)layoutSouceIconImg;
- (void)layoutSourceLabel;
- (void).cxx_destruct;

@end
