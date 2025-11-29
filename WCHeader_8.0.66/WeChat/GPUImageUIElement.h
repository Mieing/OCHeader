@class CALayer, UIView;

@interface GPUImageUIElement : GPUImageOutput {
    UIView *view;
    CALayer *layer;
    struct CGSize { double width; double height; } previousLayerSizeInPixels;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
    double actualTimeOfLastUpdate;
}

- (id)initWithView:(id)a0;
- (id)initWithLayer:(id)a0;
- (struct CGSize { double x0; double x1; })layerSizeInPixels;
- (void)update;
- (void)updateUsingCurrentTime;
- (void)updateWithTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void).cxx_destruct;

@end
