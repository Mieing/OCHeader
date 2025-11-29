@class UIImageView, UILabel, UIView, AWEGradientView;

@interface AWEVideoCoverEvaluateAiCoverItemCell : UICollectionViewCell

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) UIImageView *loadingAiImageView;

- (void)updateWithModel:(id)a0 isSelected:(BOOL)a1 status:(unsigned long long)a2;
- (void)rotate360DegreesWithDuration:(double)a0 view:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
