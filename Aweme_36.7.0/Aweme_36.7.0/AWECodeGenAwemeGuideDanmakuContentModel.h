@class NSString;

@interface AWECodeGenAwemeGuideDanmakuContentModel : AWEBaseDataModel

@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *suffixText;
@property (copy, nonatomic) NSString *logo;
@property (nonatomic) BOOL useDyLogo;
@property (copy, nonatomic) NSString *linkAction;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
