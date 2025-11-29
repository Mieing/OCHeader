@interface OMJCoordinatingDesc : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (readonly, nonatomic) unsigned long long canvasOriginType;

- (id)initWithCanvasSize:(struct CGSize { double x0; double x1; })a0 canvasOriginType:(unsigned long long)a1;

@end
