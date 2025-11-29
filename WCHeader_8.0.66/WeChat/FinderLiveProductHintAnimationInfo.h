@class NSString, NSMutableArray, FinderLiveNumericAnimationRuleInfo;

@interface FinderLiveProductHintAnimationInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *backendRgbaList;
@property (retain, nonatomic) NSString *animationUrl;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *delimterStr;
@property (nonatomic) unsigned int hasNumericRule;
@property (retain, nonatomic) FinderLiveNumericAnimationRuleInfo *ruleInfo;

+ (void)initialize;

@end
