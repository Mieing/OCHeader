@class CALayer, MMLiveEffectsBaseDataItem, CAShapeLayer, SightIconView, MMWebImageView, UILabel, UIView;

@interface MMLiveBeautyEffectsItemCollectionCell : UICollectionViewCell

@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UIView *imageBackgroundView;
@property (retain, nonatomic) UIView *bgBlurView;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *disableLabel;
@property (retain, nonatomic) CALayer *borderLayer;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) SightIconView *stateView;
@property (retain, nonatomic) MMLiveEffectsBaseDataItem *dataItem;

+ (id)identifier;
+ (struct CGSize { double x0; double x1; })getCellSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setIconType:(int)a0;
- (void).cxx_destruct;

@end
