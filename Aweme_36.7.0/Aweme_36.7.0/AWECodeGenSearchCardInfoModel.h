@class NSString;

@interface AWECodeGenSearchCardInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *groupId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
