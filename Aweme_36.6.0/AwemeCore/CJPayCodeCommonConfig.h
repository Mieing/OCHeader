@class CJPayNFCConfig;

@interface CJPayCodeCommonConfig : JSONModel

@property (retain, nonatomic) CJPayNFCConfig *nfcConfig;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
