@class AWEDiscoverySearchFeedbackModel, NSString, NSDictionary, AWESearchFeelGoodEntranceIconModel, NSArray, NSNumber, AWEDiscoverySearchExtraRiskWarningModel;

@interface AWEDiscoverySearchExtraModel : AWEBaseApiModel

@property (retain, nonatomic) AWEDiscoverySearchExtraRiskWarningModel *riskWarningModel;
@property (retain, nonatomic) AWEDiscoverySearchFeedbackModel *feedbackModel;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) BOOL showFeedback;
@property (copy, nonatomic) NSString *feedbackTitle;
@property (copy, nonatomic) NSString *feedbackSubtitle;
@property (copy, nonatomic) NSDictionary *feedbackIntentInfo;
@property (retain, nonatomic) AWESearchFeelGoodEntranceIconModel *feedbackEntranceIcon;
@property (nonatomic) long long feedbackShowTipsType;
@property (nonatomic) double feedbackShowTipsDurationMS;
@property (nonatomic) double feedbackShowTipsStartDelayMS;
@property (nonatomic) long long feedbackEntranceType;
@property (copy, nonatomic) NSArray *filterSections;
@property (retain, nonatomic) NSNumber *filterShowDotTimeStamp;

+ (id)filterSectionsJSONTransformer;
+ (id)riskWarningModelJSONTransformer;
+ (id)feedbackModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
