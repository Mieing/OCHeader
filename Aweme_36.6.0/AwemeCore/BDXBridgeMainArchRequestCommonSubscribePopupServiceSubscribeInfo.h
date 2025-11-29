@class NSString, NSArray;

@interface BDXBridgeMainArchRequestCommonSubscribePopupServiceSubscribeInfo : BDXBridgeModel

@property (copy, nonatomic) NSString *serviceAccountId;
@property (nonatomic) BOOL subscribeStatus;
@property (nonatomic) BOOL disturbStatus;
@property (retain, nonatomic) NSArray *subcategorySubscribeInfos;

+ (id)subcategorySubscribeInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
