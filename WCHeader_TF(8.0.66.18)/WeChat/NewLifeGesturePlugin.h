@class NSString, MMFlutterViewController;

@interface NewLifeGesturePlugin : NSObject <MMFlutterPlugin, FlutterNewLifeGesture>

@property (weak, nonatomic) MMFlutterViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (void)onFlowListTopIsTop:(BOOL)a0 error:(id *)a1;
- (void)enableEdgeDragEnable:(BOOL)a0 error:(id *)a1;
- (void)setEdgeDragThresholdThreshold:(double)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
