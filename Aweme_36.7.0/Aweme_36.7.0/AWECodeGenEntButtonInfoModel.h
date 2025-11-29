@class NSString;

@interface AWECodeGenEntButtonInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *textColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
