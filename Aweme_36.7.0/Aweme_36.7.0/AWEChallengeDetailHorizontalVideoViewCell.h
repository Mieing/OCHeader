@class CAGradientLayer, UIImageView, UILabel, UIView;

@interface AWEChallengeDetailHorizontalVideoViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *maskingLayer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) UILabel *likeNumberLabel;
@property (retain, nonatomic) CAGradientLayer *maskGradientLayer;
@property (nonatomic) BOOL newStyle;
@property (nonatomic) BOOL hiddenLikeImageView;
@property (nonatomic) unsigned long long styleType;

+ (id)identifier;

- (void)configUI;
- (void)updateBottomContentWithStyle:(unsigned long long)a0 model:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (void)updateWithModel:(id)a0;

@end
