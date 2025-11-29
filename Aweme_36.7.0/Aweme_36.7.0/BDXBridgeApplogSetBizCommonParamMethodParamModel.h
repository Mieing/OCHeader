@class NSString, NSDictionary;

@interface BDXBridgeApplogSetBizCommonParamMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *biz;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
