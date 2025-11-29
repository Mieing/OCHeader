@class NSString;

@interface BDXBridgeShowPendantMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL status;
@property (copy, nonatomic) NSString *searchID;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
