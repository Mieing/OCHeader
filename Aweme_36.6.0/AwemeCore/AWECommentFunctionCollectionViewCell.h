@class UIImageView, NSValue, UILabel, UIView;

@interface AWECommentFunctionCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *imageBackgroundView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *yellowPoint;
@property (retain, nonatomic) NSValue *iconSize;

- (void)layoutSubviewsPosition;
- (void)configCellWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
