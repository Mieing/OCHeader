@class NSArray;

@interface BDXBridgeGetIMGroupsListMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSArray *groupList;

+ (id)groupListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
