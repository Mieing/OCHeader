@class NSString, NSNumber, NSDictionary;

@interface IESECMallXBridgeEcMallOpenAdRewardMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *adFrom;
@property (copy, nonatomic) NSString *creatorID;
@property (copy, nonatomic) NSString *rit;
@property (retain, nonatomic) NSNumber *timestamp;
@property (copy, nonatomic) NSDictionary *popupReward;
@property (copy, nonatomic) NSDictionary *adExtra;
@property (copy, nonatomic) NSDictionary *extraData;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
