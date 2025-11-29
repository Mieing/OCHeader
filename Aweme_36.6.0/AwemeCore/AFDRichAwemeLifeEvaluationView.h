@class NSString, UIImageView, UILabel, AWESpecialRichAwemeLifeEvaluationInfoModel;

@interface AFDRichAwemeLifeEvaluationView : UIView <AFDRichAwemeLifeEvaluationViewProtocol>

@property (retain, nonatomic) AWESpecialRichAwemeLifeEvaluationInfoModel *lifeEvaluationInfoModel;
@property (retain, nonatomic) UILabel *evaluationPrefixLabel;
@property (retain, nonatomic) UIImageView *evaluationLevelImageView;
@property (retain, nonatomic) UILabel *orderDescLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateView:(id)a0;
- (void).cxx_destruct;

@end
