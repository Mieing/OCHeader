@class NSString;

@interface BDXBridgeShowMaskedRecomWordsMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *maskedClickRecom;
@property (copy, nonatomic) NSString *maskType;
@property (copy, nonatomic) NSString *imprExtra;
@property (copy, nonatomic) NSString *preSearchId;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
