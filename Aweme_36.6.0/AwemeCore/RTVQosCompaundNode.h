@class NSArray, NSMutableArray;

@interface RTVQosCompaundNode : RTVQosNode

@property (retain, nonatomic) NSMutableArray *subNodes;
@property (copy, nonatomic) NSArray *criticalSubNodeKeys;

- (void)__node:(id)a0 finishWithError:(id)a1;
- (void)doFinishWithError:(id)a0 extraMonitorInfo:(id)a1 async:(BOOL)a2;
- (id)initWithKey:(id)a0 initalData:(id)a1 subNodes:(id)a2 criticalSubNodeKeys:(id)a3;
- (void).cxx_destruct;
- (void)start;

@end
