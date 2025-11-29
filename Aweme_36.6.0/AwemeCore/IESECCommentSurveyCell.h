@class UIView, NSString, IESECCommentSurveyManager;

@interface IESECCommentSurveyCell : UICollectionViewCell <IESECCommentSurveyManagerDelegate>

@property (weak, nonatomic) IESECCommentSurveyManager *service;
@property (weak, nonatomic) UIView *surveyView;
@property (copy, nonatomic) id /* block */ needUpdateLayout;
@property (copy, nonatomic) id /* block */ removeFromList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)needUpdate;
- (void)loadSurvey:(id)a0;
- (void)needRemoveWithToast:(BOOL)a0;
- (void)needRemoveWithToast:(BOOL)a0 forceSubmit:(BOOL)a1;
- (void).cxx_destruct;

@end
