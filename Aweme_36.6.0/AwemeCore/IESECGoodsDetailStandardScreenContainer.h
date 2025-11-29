@interface IESECGoodsDetailStandardScreenContainer : UIView

@property (nonatomic) double scaleFactor;
@property (nonatomic) double topOffset;
@property (nonatomic) double previousScaleFactor;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;

- (id)initWithScaleFactor:(double)a0 topOffset:(double)a1;
- (void)layoutSubviews;

@end
