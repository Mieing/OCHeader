@class NSString, NSDictionary, LOTBezierPath, NSNumber;

@interface LOTAnimatorNode : NSObject

@property (readonly, nonatomic) NSDictionary *valueInterpolators;
@property (readonly, nonatomic) NSString *keyname;
@property (readonly, nonatomic) NSNumber *currentFrame;
@property (readonly, nonatomic) LOTAnimatorNode *inputNode;
@property (retain, nonatomic) LOTBezierPath *localPath;
@property (retain, nonatomic) LOTBezierPath *outputPath;
@property (nonatomic) BOOL pathShouldCacheLengths;

- (void)setValueDelegate:(id)a0 forKeypath:(id)a1;
- (BOOL)updateWithFrame:(id)a0 withModifierBlock:(id /* block */)a1 forceLocalUpdate:(BOOL)a2;
- (BOOL)needsUpdateForFrame:(id)a0;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (void)searchNodesForKeypath:(id)a0;
- (id)initWithInputNode:(id)a0 keyName:(id)a1;
- (void)forceSetCurrentFrame:(id)a0;
- (void).cxx_destruct;
- (BOOL)updateWithFrame:(id)a0;
- (void)logString:(id)a0;

@end
