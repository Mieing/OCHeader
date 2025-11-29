@class CAGradientLayer, AWEMinorAlbum, UIImageView, UIView, UILabel, NSDictionary;

@interface AWETeenAlbumHistoryCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEMinorAlbum *model;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) CAGradientLayer *coverGradientLayer;
@property (retain, nonatomic) UIView *progressBGView;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSDictionary *logDict;

+ (struct CGSize { double x0; double x1; })cellSizeWithConstraintHeight:(double)a0;

- (void)configCellWithModel:(id)a0;
- (void)p_updateTitle;
- (void)p_setupView;
- (void)p_updateCover;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
