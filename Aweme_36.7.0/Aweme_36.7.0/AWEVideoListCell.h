@class UIImageView, UILabel;

@interface AWEVideoListCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *timeLabel;

- (void)setCoverImage:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTime:(id)a0 animated:(BOOL)a1;

@end
