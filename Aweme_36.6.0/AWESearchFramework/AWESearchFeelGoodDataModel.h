@class NSString, AWESearchFeelGoodEntranceIconModel, AWESearchFeelGoodSurveyTaskModel;

@interface AWESearchFeelGoodDataModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) AWESearchFeelGoodEntranceIconModel *iconModel;
@property (nonatomic) long long showTipsType;
@property (nonatomic) double showTipsDurationMS;
@property (nonatomic) double showTipsStartDelayMS;
@property (copy, nonatomic) NSString *search_type;
@property (copy, nonatomic) AWESearchFeelGoodSurveyTaskModel *surveyTask;

- (void).cxx_destruct;

@end
