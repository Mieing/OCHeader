@class NSString, NSNumber, BDXBridgeLocalLifeNearbyBigCardActionNearbyExtraInfo;

@interface BDXBridgeLocalLifeNearbyBigCardActionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *itemId;
@property (retain, nonatomic) NSNumber *itemIndex;
@property (retain, nonatomic) BDXBridgeLocalLifeNearbyBigCardActionNearbyExtraInfo *nearbyExtraInfo;
@property (nonatomic) long long actionName;

+ (id)requiredKeyPaths;
+ (id)actionNameJSONTransformer;
+ (id)nearbyExtraInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
