@interface MMLayer : NSObject {
    struct shared_ptr<WeVisionUtil::Layer> { struct Layer *__ptr_; struct __shared_weak_count *__cntrl_; } _nativeLayer;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGPoint { double x; double y; } origin;
@property (nonatomic) unsigned int rgba8TextureID;
@property (nonatomic) unsigned int lumaTextureID;
@property (nonatomic) unsigned int chromaTextureID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) BOOL flipX;
@property (nonatomic) unsigned int zOrder;

+ (id)layer;

- (id)initWithNativeLayer:(void *)a0;
- (void)addSubLayer:(id)a0;
- (void)removeFromSuperLayer;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
