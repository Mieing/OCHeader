@class NSString, BDSHSpanEngine, BDSHView;

@interface BDSHViewComponent : NSObject {
    void *_renderNode;
}

@property (copy, nonatomic) NSString *nodeId;
@property (weak, nonatomic) BDSHSpanEngine *engine;
@property (retain, nonatomic) BDSHView *sheoView;
@property (nonatomic) BOOL isRootComponent;
@property (nonatomic) struct CGSize { double width; double height; } originalSize;
@property (nonatomic) float rotationX;
@property (nonatomic) float rotationY;
@property (nonatomic) float rotationZ;
@property (nonatomic) float scaleX;
@property (nonatomic) float scaleY;
@property (nonatomic) float translateX;
@property (nonatomic) float translateY;

+ (id)getComponentClassMap;
+ (id)getComponentStringMap;
+ (id)createComponentWithRenderNode:(void *)a0 engine:(id)a1;

- (void)updateChildren;
- (void)p_sendClickEvent;
- (void)updateWithRenderNode:(void *)a0 engine:(id)a1;
- (void)updateRenderWithType:(int)a0 value:(const void *)a1;
- (void)updateRenderWithData:(const void *)a0;
- (void)updateVirtualNodeWithData:(const void *)a0;
- (void)updateAnimateWithData:(const void *)a0;
- (struct CGSize { double x0; double x1; })getImageContentSize;
- (void)executeFunction:(id)a0 params:(id)a1;
- (id)initWithRenderNode:(void *)a0 engine:(id)a1;
- (void)p_setFrameWithX:(double)a0 y:(double)a1 width:(double)a2 height:(double)a3;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })p_getTransform3D;
- (void)p_addBackgroundGradient:(const void *)a0;
- (void)p_addAnimation:(const void *)a0;
- (void)p_sendLongClickEvent:(id)a0;
- (void)p_sendTouchUpEvent;
- (void)p_sendAppearEvent;
- (void)updateRenderData;
- (unsigned long long)p_animationOptionsWithType:(int)a0;
- (void)p_setOriginX:(double)a0;
- (void)p_setOriginY:(double)a0;
- (void)p_setWidth:(double)a0;
- (void)p_setHeight:(double)a0;
- (void)setBackgroundGradientWithColors:(id)a0 locations:(const double *)a1 angle:(unsigned char)a2;
- (int)p_getPropertyType:(const void *)a0;
- (id)p_getAnimationKeyPath:(int)a0;
- (id)p_timingNameWithType:(int)a0;
- (id)p_getAnimationValue:(int)a0 value:(const void *)a1;
- (void *)getRenderNode;
- (void)sendDisappearEvent;
- (void)p_sendDisappearEvent;
- (void).cxx_destruct;
- (id)contentView;
- (void)dealloc;

@end
