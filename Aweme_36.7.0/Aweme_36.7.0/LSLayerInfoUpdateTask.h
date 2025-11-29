@interface LSLayerInfoUpdateTask : NSObject

@property (nonatomic) struct ILayerInfo { int layer_id_; int zOrder_; struct ILayerRect { float x; float y; float w; float h; } rect_; int render_mode_; BOOL enabled_; int rotation; float alpha; } srcInfo;
@property (nonatomic) struct ILayerInfo { int layer_id_; int zOrder_; struct ILayerRect { float x; float y; float w; float h; } rect_; int render_mode_; BOOL enabled_; int rotation; float alpha; } dstInfo;
@property (nonatomic) struct ILayerInfo { int layer_id_; int zOrder_; struct ILayerRect { float x; float y; float w; float h; } rect_; int render_mode_; BOOL enabled_; int rotation; float alpha; } curInfo;
@property (nonatomic) int frames;
@property (nonatomic) struct ILayerInfo { int layer_id_; int zOrder_; struct ILayerRect { float x; float y; float w; float h; } rect_; int render_mode_; BOOL enabled_; int rotation; float alpha; } pace;

- (id)initWithSrcInfo:(struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; } *)a0 dstInfo:(struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; } *)a1 frames:(int)a2;
- (struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; } *)getUpdatedInfo;
- (BOOL)shouldUpdate;

@end
