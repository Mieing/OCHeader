@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeImGroupOpenJsbMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *target;
@property (retain, nonatomic) NSNumber *bizLine;
@property (copy, nonatomic) NSString *bizScene;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *mobExt;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
