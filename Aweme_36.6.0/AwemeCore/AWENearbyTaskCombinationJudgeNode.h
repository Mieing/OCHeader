@class NSString, NSArray, NSDictionary;

@interface AWENearbyTaskCombinationJudgeNode : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSArray *childNodes;
@property (copy, nonatomic) NSDictionary *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)childNodesJSONTransformer;

- (void).cxx_destruct;

@end
