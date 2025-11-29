@class NSArray;

@interface BDXBridgeGetIMGroupInfoMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSArray *groupInfoList;

+ (id)groupInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
