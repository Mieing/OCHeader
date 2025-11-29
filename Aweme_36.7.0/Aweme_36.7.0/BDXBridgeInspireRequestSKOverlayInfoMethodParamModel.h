@class NSString;

@interface BDXBridgeInspireRequestSKOverlayInfoMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *appleId;
@property (copy, nonatomic) NSString *creativeId;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) id skAdNetworkParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
