@class NSDictionary, AWEQuestionnaireResponse;
@protocol AWEFrequencyControlStrategyProtocol;

@interface AWECommonSurveyDataController : NSObject

@property (retain, nonatomic) AWEQuestionnaireResponse *questionnaireResponse;
@property (weak, nonatomic) id<AWEFrequencyControlStrategyProtocol> frequencyControl;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (void)requestSurveyWithParams:(id)a0 completion:(id /* block */)a1;
- (id)initWithFrequencyControl:(id)a0 extraInfo:(id)a1;
- (void)initialFetchWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
