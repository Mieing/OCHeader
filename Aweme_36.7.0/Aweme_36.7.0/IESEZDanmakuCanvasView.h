@class NSString, IESEZDanmakuContext;

@interface IESEZDanmakuCanvasView : UIView <IESEZDanmakuCanvasProtocol, IESEZDanmakuControlProtocol>

@property (retain, nonatomic) IESEZDanmakuContext *context;
@property (nonatomic) struct CGPoint { double x; double y; } startOrigin;
@property (nonatomic) BOOL forwardingHit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long controlState;

+ (id)componentType;

- (void)attachOnViewHierarchy:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)resetCurrentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addDanmakuView:(id)a0;
- (long long)allDanmakuViewCount;
- (void)setHitForwarding:(BOOL)a0;
- (void)setCurrentStartOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)pause;
- (id)initWithContext:(id)a0;
- (void)stop;
- (void)start;
- (void)resume;
- (id)canvasView;
- (struct CGSize { double x0; double x1; })canvasSize;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
