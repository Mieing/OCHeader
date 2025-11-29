@class NSMutableDictionary;

@interface AWEIMMultiPathTaskPipelineNode : NSObject

@property (retain, nonatomic) NSMutableDictionary *targets;
@property (copy, nonatomic) id /* block */ executeBlock;

- (void)continueWithContext:(id)a0;
- (void)executeWithContext:(id)a0 completion:(id /* block */)a1;
- (void)addTargetNode:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
