@class IESECWinCategoryModel, UIImageView, CADisplayLink, UILabel, UIView;

@interface IESECWinCategoryCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *categoryIcon;
@property (retain, nonatomic) UILabel *categoryNameLabel;
@property (retain, nonatomic) UIImageView *categoryImageView;
@property (retain, nonatomic) IESECWinCategoryModel *model;
@property (retain, nonatomic) UIView *nameContainer;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousFrame;

- (void)startDisplayLink;
- (void)updateUIWithSelected:(BOOL)a0;
- (void)displayLinkDidFire;
- (void)updateImageViewWithSelected:(BOOL)a0;
- (void)updateNameLabelWithSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopDisplayLink;
- (void)updateWithModel:(id)a0;
- (void)setUpConstraints;

@end
