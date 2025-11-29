@class CAEAGLLayer;

@interface WKPlatformCanvasViewLayerInfo : NSObject

@property (weak, nonatomic) CAEAGLLayer *layer;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) unsigned char scaleMode;

- (id)initWithLayer:(id)a0 scaleMode:(unsigned char)a1;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;

@end
