@class CALayer, MiniTaskCollectioViewMaskLayerConfig, CAShapeLayer;

@interface MiniTaskCollectioViewMaskLayer : CALayer

@property (retain, nonatomic) CAShapeLayer *subLeftMask;
@property (retain, nonatomic) CAShapeLayer *subRightMask;
@property (retain, nonatomic) CAShapeLayer *subMaskForOneCell;
@property (retain, nonatomic) CALayer *guardLayer;
@property (retain, nonatomic) CALayer *bigGuardLayer;
@property (retain, nonatomic) MiniTaskCollectioViewMaskLayerConfig *config;

- (id)initWithConfig:(id)a0;
- (void)updateSubMaskLayersWithCellCount:(unsigned long long)a0;
- (void)hideMaskLayer;
- (void)showMaskLayer;
- (void)updateSublayers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transCellRectToMaskRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
