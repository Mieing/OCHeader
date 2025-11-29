@class NSString;

@interface IESIMUGCodeGenDescTagModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *icon;
@property (nonatomic) int num;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSString *textColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
