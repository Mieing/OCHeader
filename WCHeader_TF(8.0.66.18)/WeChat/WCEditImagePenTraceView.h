@class NSString, CAShapeLayer;

@interface WCEditImagePenTraceView : UIView <WCEditImageTraceViewProtocol>

@property (retain, nonatomic) CAShapeLayer *normalPenTraceLayer;
@property (retain, nonatomic) CAShapeLayer *highLightPenTraceLayer;
@property (retain, nonatomic) CAShapeLayer *highLightPenTraceBoarderLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)copyLayer:(id)a0;

- (void)setupWithShapeLayer:(id)a0;
- (BOOL)isViewPathContainPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)highLightPenTraceAtPointIfNeeded:(struct CGPoint { double x0; double x1; })a0;
- (void)setPenTraceViewHighLight:(BOOL)a0;
- (BOOL)isPenTraceViewHighLight;
- (BOOL)hiddenPenTraceAtPointIfNeeded:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
