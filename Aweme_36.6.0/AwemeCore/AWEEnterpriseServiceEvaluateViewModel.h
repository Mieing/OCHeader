@class NSMutableArray, NSString, NSArray, AWERatingViewRenderConfig, NSDictionary, NSNumber, AWEEnterpriseServiceEvaluateModel;

@interface AWEEnterpriseServiceEvaluateViewModel : AWEEnterpriseIMMessageCustomerBaseViewModel

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWERatingViewRenderConfig *ratingConfig;
@property (copy, nonatomic) NSArray *descriptions;
@property (copy, nonatomic) NSDictionary *feedbacks;
@property (copy, nonatomic) NSString *submitTitle;
@property (nonatomic) long long selectedLevel;
@property (retain, nonatomic) NSArray *selectedFeedbacks;
@property (nonatomic) long long localLevel;
@property (retain, nonatomic) NSArray *localFeedbackIDs;
@property (retain, nonatomic) NSNumber *currentSelectedLevel;
@property (retain, nonatomic) AWEEnterpriseServiceEvaluateModel *model;
@property (retain, nonatomic) NSMutableArray *currentSelectedFeedbackIds;
@property (nonatomic) long long timeout;
@property (copy, nonatomic) NSString *timeoutToast;

- (void)configDataWithContent:(id)a0 ext:(id)a1 localExt:(id)a2;
- (void)updateWithExt:(id)a0;
- (void)updateWithModel:(id)a0 localExt:(id)a1 syncExt:(id)a2;
- (void)p_updateWithExt:(id)a0;
- (id)feedbackKey:(id)a0;
- (void)changeFeedback:(id)a0 selected:(BOOL)a1;
- (id)currentSelectedFeedbackAndRate;
- (void)submitWithMessageInfo:(id)a0 completeBlock:(id /* block */)a1;
- (void)changeCurrentLevel:(id)a0;
- (id)createRatingConfigWith:(long long)a0 selectedLevel:(long long)a1;
- (void)parseSyncExt:(id)a0;
- (void)parseLocalExt:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSize;
- (BOOL)checkTimeout;

@end
