@class CALayer;

@interface AWEDanmakuMaskLayer : CALayer

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentLayerFrame;
@property (retain, nonatomic) CALayer *topLayer;
@property (retain, nonatomic) CALayer *bottomLayer;
@property (retain, nonatomic) CALayer *leftLayer;
@property (retain, nonatomic) CALayer *rightLayer;
@property (retain, nonatomic) CALayer *contentLayer;
@property (retain, nonatomic) CALayer *svgLayer;

- (id)createLayerWithColor:(id)a0;
- (void)layoutSVGLayerIfNeeded;
- (void)layoutContentLayerAndAroundLayer;
- (void).cxx_destruct;
- (id)init;

@end
