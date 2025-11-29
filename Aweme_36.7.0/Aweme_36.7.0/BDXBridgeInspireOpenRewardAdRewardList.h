@class NSArray;

@interface BDXBridgeInspireOpenRewardAdRewardList : BDXBridgeModel

@property (retain, nonatomic) NSArray *amount;
@property (retain, nonatomic) NSArray *unit;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
