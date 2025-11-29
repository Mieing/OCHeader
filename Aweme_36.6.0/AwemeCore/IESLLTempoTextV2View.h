@class UIImage, CALayer, NSObject, IESLLTempoTextV2Renderer;
@protocol OS_dispatch_queue;

@interface IESLLTempoTextV2View : UIView

@property (retain, nonatomic) UIImage *renderImg;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tempoChildQueue;
@property (retain, nonatomic) CALayer *contentLayer;
@property (weak, nonatomic) IESLLTempoTextV2Renderer *textRenderer;

+ (Class)layerClass;

- (void)drawWithContentLayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentsScale:(double)a1 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)text;

@end
