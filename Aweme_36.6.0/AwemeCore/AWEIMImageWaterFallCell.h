@class UIImageView, NSString, CAShapeLayer;

@interface AWEIMImageWaterFallCell : UICollectionViewCell <AWEIMImageWaterFallCellProtocol>

@property (retain, nonatomic) UIImageView *mainImageView;
@property (retain, nonatomic) CAShapeLayer *dashBorderLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)configWithItem:(id)a0;
- (void)p_setupBaseUI;
- (void)p_updateMainImageUIWithItem:(id)a0;
- (void)drawDottedLineWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 width:(double)a1 dashPattern:(id)a2 cornerRadius:(double)a3 color:(id)a4;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
