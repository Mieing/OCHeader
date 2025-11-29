@class NSString;

@interface AWECodeGenSelectUGBarInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *barId;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *clientExtra;
@property (copy, nonatomic) NSString *lynxExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
