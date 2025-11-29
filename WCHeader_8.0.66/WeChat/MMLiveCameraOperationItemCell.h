@class UIView, MMLiveCameraOperationItem, MMUIButton, MMUILabel;

@interface MMLiveCameraOperationItemCell : UICollectionViewCell

@property (retain, nonatomic) MMLiveCameraOperationItem *operationItem;
@property (retain, nonatomic) MMUIButton *button;
@property (retain, nonatomic) MMUILabel *label;
@property (retain, nonatomic) MMUILabel *secondaryLabel;
@property (retain, nonatomic) UIView *badgeView;
@property (retain, nonatomic) MMUILabel *badgeLabel;
@property (copy, nonatomic) id /* block */ onTapped;

+ (id)reuseId;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithItem:(id)a0;
- (void)layoutSubviews;
- (void)onButtonTapped;
- (void).cxx_destruct;

@end
