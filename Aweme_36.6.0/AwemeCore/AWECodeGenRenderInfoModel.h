@class NSString;

@interface AWECodeGenRenderInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
