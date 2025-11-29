@class NSString, NSNumber;

@interface BDXBridgeLocalLifeNearbyBigCardOpenDetailMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *itemId;
@property (retain, nonatomic) NSNumber *itemIndex;
@property (copy, nonatomic) NSString *containerId;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSNumber *imagePosition;
@property (nonatomic) long long detailType;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)detailTypeJSONTransformer;

- (void).cxx_destruct;

@end
