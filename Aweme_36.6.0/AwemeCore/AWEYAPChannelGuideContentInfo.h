@class AWEYAPChannelPopupGuideConfig, NSString, AWEYAPChannelGuideShowConfig;

@interface AWEYAPChannelGuideContentInfo : AWEBaseApiModel

@property (retain, nonatomic) AWEYAPChannelPopupGuideConfig *popupGuideConfig;
@property (nonatomic) BOOL isHit;
@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSString *sourceCode;
@property (copy, nonatomic) NSString *ruleCode;
@property (copy, nonatomic) NSString *ruleDesc;
@property (nonatomic) long long rulePriority;
@property (copy, nonatomic) NSString *ruleType;
@property (copy, nonatomic) NSString *ruleContent;
@property (retain, nonatomic) AWEYAPChannelGuideShowConfig *showConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
