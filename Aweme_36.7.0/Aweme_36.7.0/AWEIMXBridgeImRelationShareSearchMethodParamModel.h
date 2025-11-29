@class NSString, NSNumber;

@interface AWEIMXBridgeImRelationShareSearchMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *enterFrom;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
