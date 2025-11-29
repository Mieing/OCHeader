@class NSString;

@interface AWECodeGenIm2PigeonInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *imPigeonText;
@property (copy, nonatomic) NSString *imPigeonSchema;
@property (copy, nonatomic) NSString *imPigeonUserType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
