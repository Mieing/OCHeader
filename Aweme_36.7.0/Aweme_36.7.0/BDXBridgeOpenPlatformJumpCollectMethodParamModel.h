@class NSString, NSNumber;

@interface BDXBridgeOpenPlatformJumpCollectMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *seriesId;
@property (retain, nonatomic) NSNumber *contentSubType;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
