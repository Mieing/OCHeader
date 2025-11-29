@class NSString;

@interface AWECodeGenSearchCardConfigModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *backgroundColorStart;
@property (copy, nonatomic) NSString *backgroundColorEnd;
@property (copy, nonatomic) NSString *suggestWordBgColor;
@property (copy, nonatomic) NSString *coverUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
