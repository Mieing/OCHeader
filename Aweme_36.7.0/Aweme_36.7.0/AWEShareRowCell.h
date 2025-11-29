@class UIImageView, UILabel, UIView, BDImageView;

@interface AWEShareRowCell : UICollectionViewCell

@property (retain, nonatomic) UIView *customView;
@property (nonatomic) BOOL shouldBubbleAnimates;
@property (nonatomic) BOOL scalesImageWhenHighlighted;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIImageView *smallImageView;
@property (readonly, nonatomic) BDImageView *bottomCenterImageView;

+ (struct CGSize { double x0; double x1; })smallIconSize;
+ (struct CGSize { double x0; double x1; })customViewSizeInInteractionScene;
+ (id)titleTextColorForStyle:(unsigned long long)a0;
+ (id)imageBadgeColor;
+ (struct CGSize { double x0; double x1; })iconSize;
+ (struct CGSize { double x0; double x1; })cellSize;
+ (double)iconTitlePadding;

- (void)updateWithItem:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
