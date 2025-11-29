@class NSArray;

@interface IESECommerceGoodsDetailNavBarConfig : IESECBaseApiModel

@property (copy, nonatomic) NSArray *transitionNodes;
@property (copy, nonatomic) NSArray *scrollNodes;
@property (copy, nonatomic) NSArray *specialScrollNodes;
@property (nonatomic) BOOL collected;
@property (nonatomic) BOOL collapsed;

+ (id)transitionNodesJSONTransformer;
+ (id)scrollNodesJSONTransformer;
+ (id)specialScrollNodesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
