@class TTHttpTask;

@interface BDARFeedbackService : NSObject

@property (retain, nonatomic) TTHttpTask *fetchReportReasonsTask;
@property (retain, nonatomic) TTHttpTask *fetchDislikeReasonsTask;

+ (id)sharedInstance;

- (id)commonNetParams;
- (id)subFeedbackListForType:(unsigned long long)a0;
- (id)defaultDislikeId;
- (id)urlWithADModel:(id)a0 type:(unsigned long long)a1;
- (id)reportOrigin;
- (id)actualReportAdType;
- (id)cachedDislikeReasons;
- (id)cachedReportReasons;
- (id)feedbackListWithADModel:(id)a0 feedbackWebEnabled:(BOOL)a1 dislikeWebEnabled:(BOOL)a2 dislikeOptimized:(BOOL)a3;
- (id)updateFeedbackModel:(id)a0 type:(unsigned long long)a1 reasons:(id)a2;
- (void)fetchReportReasonsCompletion:(id /* block */)a0;
- (void)fetchDislikeReasonsADModel:(id)a0 completion:(id /* block */)a1;
- (void)dislikeWithFeedbackModel:(id)a0 adModel:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)reportWithFeedbackModel:(id)a0 adModel:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
