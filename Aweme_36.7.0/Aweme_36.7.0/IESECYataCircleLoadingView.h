@class NSString, CAShapeLayer;

@interface IESECYataCircleLoadingView : IESECSliceXViewElementView <IESECSliceXFlexObserver>

@property (retain, nonatomic) CAShapeLayer *ringLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flexDidLayout:(id)a0;
- (void)createLayerIfNeeded;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void)endAnimation;

@end
