@class NSString, BDMannorAdFeedbackView, BDMannorAdDataModel, NSMutableArray;

@interface BDMannorAdFeedbackComponent : NSObject <BDMannorAdFeedbackProtocol>

@property (retain, nonatomic) BDMannorAdDataModel *model;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSMutableArray *reportArray;
@property (retain, nonatomic) BDMannorAdFeedbackView *currentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showToast;
- (void)requestReportInfoWithContext:(id)a0;
- (void)reportFeedbackInfoWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)showFeedbackViewWithModel:(id)a0 logExtra:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestDislikeWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)parseWithJsonObj:(id)a0;
- (void)removeFeedbackView;
- (void)trackProblemEventWithIndex:(unsigned long long)a0;
- (void)requestDislike;
- (void)requestReportWithIndex:(unsigned long long)a0;
- (void)feedbackViewBack;
- (void)normalActionWithIndex:(unsigned long long)a0;
- (void)reportActionWithIndex:(unsigned long long)a0;
- (void)requestReportInfo;
- (id)initPrivate;
- (void).cxx_destruct;

@end
