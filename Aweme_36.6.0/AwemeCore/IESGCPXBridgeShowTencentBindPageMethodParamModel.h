@class NSNumber, NSString;

@interface IESGCPXBridgeShowTencentBindPageMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *platform;
@property (copy, nonatomic) NSString *miniId;
@property (copy, nonatomic) NSString *miniPath;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *trackParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
