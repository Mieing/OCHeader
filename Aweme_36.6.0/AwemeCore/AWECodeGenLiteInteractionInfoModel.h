@class NSString;

@interface AWECodeGenLiteInteractionInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *imSchema;
@property (nonatomic) long long type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
