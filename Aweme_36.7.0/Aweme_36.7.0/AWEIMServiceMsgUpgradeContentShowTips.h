@class NSString, NSArray;

@interface AWEIMServiceMsgUpgradeContentShowTips : AWEBaseApiModel

@property (copy, nonatomic) NSString *tips;
@property (retain, nonatomic) NSArray *tipsTemplate;

+ (id)tipsTemplateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
