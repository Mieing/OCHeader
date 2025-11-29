@class NSString, NSDictionary, AWESearchFeelGoodEntranceIconModel, AWESearchFeelGoodSurveyTaskModel;

@interface AWESearchFeelGoodModel : AWEBaseApiModel

@property (nonatomic) BOOL showEntrance;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSDictionary *intentInfo;
@property (nonatomic) BOOL isOnlySupportLightMode;
@property (retain, nonatomic) AWESearchFeelGoodEntranceIconModel *iconModel;
@property (nonatomic) long long showTipsType;
@property (nonatomic) double showTipsDurationMS;
@property (nonatomic) double showTipsStartDelayMS;
@property (nonatomic) long long feedbackEntranceType;
@property (nonatomic) long long showTipsCardIndex;
@property (copy, nonatomic) NSString *feelgoodLynxEntranceSchema;
@property (copy, nonatomic) AWESearchFeelGoodSurveyTaskModel *surveyTask;

+ (id)surveyTaskJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
