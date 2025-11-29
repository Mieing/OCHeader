@class NSString, LSGLScreenRender;

@interface LayerRectDescription : NSObject {
    LSGLScreenRender *callback;
}

@property (nonatomic) unsigned long long lazy_render_flag;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectValue;
@property (copy, nonatomic) NSString *layer_name;
@property (nonatomic) int layer_id;
@property (nonatomic) int layer_zOrder;
@property (nonatomic) unsigned long long render_flag;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textureRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } vetrixRect;

- (id)initWithLayerName:(id)a0 layer_id:(int)a1;
- (void)setCurrMixedFrameCallback:(id)a0;
- (id)getCurrMixedFrameCallback;
- (void).cxx_destruct;

@end
