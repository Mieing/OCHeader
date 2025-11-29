@interface AWEButtonSurveyViewModel : NSObject

@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL isReporting;
@property (nonatomic) BOOL isReportingShow;

- (void)trackSurveyClick:(id)a0 optionInfo:(id)a1 extraInfo:(id)a2;
- (void)reportOption:(id)a0 optionInfo:(id)a1 completion:(id /* block */)a2;
- (void)trackSurveyShow:(id)a0 extraInfo:(id)a1;
- (void)reportForFrequencyControl:(id)a0 eventName:(id)a1 completion:(id /* block */)a2;
- (void)reportForFeelGoodShow:(id)a0 completion:(id /* block */)a1;

@end
