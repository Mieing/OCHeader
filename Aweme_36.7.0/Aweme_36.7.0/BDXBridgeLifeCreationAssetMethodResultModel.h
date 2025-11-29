@class NSNumber, NSString, NSArray;

@interface BDXBridgeLifeCreationAssetMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSArray *respInstances;
@property (nonatomic) long long selectedTab;
@property (nonatomic) long long action;

+ (id)actionJSONTransformer;
+ (id)selectedTabJSONTransformer;
+ (id)respInstancesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
