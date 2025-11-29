@class NSString, NSDictionary;

@interface BDXBridgeOpenShareCallbackMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *openShareId;
@property (copy, nonatomic) NSDictionary *data;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
