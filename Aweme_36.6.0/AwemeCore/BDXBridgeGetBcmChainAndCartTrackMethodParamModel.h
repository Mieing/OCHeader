@class NSString, NSDictionary;

@interface BDXBridgeGetBcmChainAndCartTrackMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSString *cart_track;
@property (copy, nonatomic) NSDictionary *bcm;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
