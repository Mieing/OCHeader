@class NSString, NSNumber, BDXBridgeOpenMixVideoSelectChaptersParams;

@interface BDXBridgeOpenMixVideoSelectChaptersMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sessionid;
@property (retain, nonatomic) NSNumber *aweme_index;
@property (retain, nonatomic) BDXBridgeOpenMixVideoSelectChaptersParams *params;

+ (id)requiredKeyPaths;
+ (id)paramsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
