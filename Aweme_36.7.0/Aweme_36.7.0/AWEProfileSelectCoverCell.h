@class UIImageView, AWEGradientView, UILabel, BDImageView;

@interface AWEProfileSelectCoverCell : UICollectionViewCell

@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) AWEGradientView *maskLayer;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *countLabel;

+ (id)awemeCoverURLWithAwemeModel:(id)a0;

- (void)updateCoverWithModel:(id)a0;
- (void)refreshWithAwemeModel:(id)a0 isRecommend:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
