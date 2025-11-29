@class NSArray;
@protocol CachalotRenderPipelineComponentViewModel;

@interface CachalotNextOperationConfig : NSObject

@property (copy, nonatomic) id /* block */ detector;
@property (copy, nonatomic) id /* block */ detector;
@property (nonatomic) unsigned long long operationType;
@property (copy, nonatomic) id /* block */ anchorNodePredicate;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> anchorNode;
@property (nonatomic) BOOL anchorAsParent;
@property (copy, nonatomic) NSArray *insertNodesPredicates;
@property (copy, nonatomic) NSArray *insertNodes;
@property (nonatomic) unsigned long long insertRelation;
@property (nonatomic) long long insertIndex;
@property (copy, nonatomic) NSArray *deleteNodesPredicates;
@property (copy, nonatomic) NSArray *deleteNodes;
@property (copy, nonatomic) NSArray *updateHeightNodesPredicates;
@property (copy, nonatomic) NSArray *updateHeightNodes;
@property (copy, nonatomic) NSArray *updateRenderNodesPredicates;
@property (copy, nonatomic) NSArray *updateRenderNodes;
@property (copy, nonatomic) id /* block */ preparedBlock;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
