@class NSDictionary, NSMutableArray;

@interface RTVQosCompaundNodeMaker : NSObject

@property (retain, nonatomic) NSMutableArray *subNodes;
@property (retain, nonatomic) NSMutableArray *criticalSubNodeKeys;
@property (copy, nonatomic) NSDictionary *initialData;

- (void)addDependencyNode:(id)a0 isCritical:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
