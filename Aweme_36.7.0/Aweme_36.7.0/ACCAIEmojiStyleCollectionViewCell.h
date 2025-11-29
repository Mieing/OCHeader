@class UIImageView;

@interface ACCAIEmojiStyleCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;

+ (BOOL)shouldUseSmallLayout;
+ (struct CGSize { double x0; double x1; })itemSize;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
