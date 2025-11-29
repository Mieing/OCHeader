@class UIImageView, UILabel;

@interface AFDStoryUserListDiverseDiggItemCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *countLabel;

+ (double)itemWidthWithModel:(id)a0;

- (void)updateDataWithModel:(id)a0;
- (void)updateLayoutWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
