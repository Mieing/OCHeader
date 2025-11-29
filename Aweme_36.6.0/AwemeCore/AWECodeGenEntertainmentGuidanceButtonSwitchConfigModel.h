@class NSString;

@interface AWECodeGenEntertainmentGuidanceButtonSwitchConfigModel : AWEBaseDataModel

@property (nonatomic) int switchSecond;
@property (nonatomic) long long timeCountType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *richText;
@property (nonatomic) BOOL needCountdownText;
@property (nonatomic) long long showEndAction;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
