@class NSString, NSMutableArray;

@interface AWEIMTaskPipelineNode : NSObject <AWEIMTaskPipelineNodeInterface>

@property (retain, nonatomic) NSMutableArray *targets;
@property (copy, nonatomic) id /* block */ executeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addTargetNode:(id)a0;
- (void)continueWithContext:(id)a0;
- (void)executeWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
