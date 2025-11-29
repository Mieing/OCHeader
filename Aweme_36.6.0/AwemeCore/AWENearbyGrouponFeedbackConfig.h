@class AWENearbyGrouponNegativeFeedbackSetting;

@interface AWENearbyGrouponFeedbackConfig : AWEBaseApiModel

@property (retain, nonatomic) AWENearbyGrouponNegativeFeedbackSetting *negativeFeedbackSetting;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
