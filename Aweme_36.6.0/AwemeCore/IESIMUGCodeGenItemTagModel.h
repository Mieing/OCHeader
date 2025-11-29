@class NSString;

@interface IESIMUGCodeGenItemTagModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *icon;
@property (nonatomic) int num;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
