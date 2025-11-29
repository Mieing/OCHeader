@class UIImageView, AWEGradientView, UILabel;

@interface AWELiveVSTabBannerImageCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEGradientView *coverBottomInfoMaskView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;

- (void)updateImgeUrl:(id)a0 mainTitle:(id)a1 subTitle:(id)a2;
- (void)updateImgeViewHightWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupView;

@end
