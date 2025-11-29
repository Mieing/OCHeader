@class NSString;

@interface AWECodeGenCommentTranslateConfigModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *openLabel;
@property (copy, nonatomic) NSString *closeLabel;
@property (copy, nonatomic) NSString *waitingLabel;
@property (copy, nonatomic) NSString *failLabel;
@property (copy, nonatomic) NSString *settingGuide;
@property (copy, nonatomic) NSString *goSetting;
@property (copy, nonatomic) NSString *unfoldLabel;
@property (copy, nonatomic) NSString *putAwayLabel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
