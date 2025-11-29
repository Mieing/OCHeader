@class NSString;

@interface AWECodeGenEntertainmentRightLabelModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *textColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
