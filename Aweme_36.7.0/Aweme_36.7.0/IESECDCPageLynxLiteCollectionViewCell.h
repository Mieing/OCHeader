@class UIView;

@interface IESECDCPageLynxLiteCollectionViewCell : UICollectionViewCell

@property (nonatomic) double previousViewScaleFactor;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (weak, nonatomic) UIView *content;
@property (nonatomic) double viewScaleFactor;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
