@class AWEGrouponNegativeFeedbackSetting;

@interface AWEGrouponFeedbackConfig : AWEBaseApiModel

@property (retain, nonatomic) AWEGrouponNegativeFeedbackSetting *negativeFeedbackSetting;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
