@class CAShapeLayer;

@interface LOTRenderNode : LOTAnimatorNode

@property (readonly, nonatomic) CAShapeLayer *outputLayer;

- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (id)initWithInputNode:(id)a0 keyName:(id)a1;
- (id)actionsForRenderLayer;
- (void).cxx_destruct;
- (id)localPath;
- (id)outputPath;

@end
