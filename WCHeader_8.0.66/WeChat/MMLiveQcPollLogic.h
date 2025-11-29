@class MMFinderLivePromoteDisplayLease, MMLiveQcPollActivityFeed, NSString, NSMutableSet, MMFinderLiveTaskId, MMLiveQcPoll, NSMutableArray;

@interface MMLiveQcPollLogic : NSObject <MMLiveQcPollResponseDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSMutableSet *handledPolls;
@property (retain, nonatomic) MMLiveQcPoll *currentPoll;
@property (retain, nonatomic) NSMutableArray *questionStack;
@property (retain, nonatomic) MMFinderLivePromoteDisplayLease *leadingQuestionDisplayLease;
@property (retain, nonatomic) MMLiveQcPollActivityFeed *activityFeed;
@property (nonatomic) BOOL anyResponseReceived;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)startPollTask:(id)a0;
- (void)onFirstResponseOptionSelectedForQuestion:(id)a0;
- (void)onResponseOptionsEntered:(id)a0 forQuestion:(id)a1;
- (void)onQuestionDismissedWithoutResponseEntered:(id)a0;
- (void)showNextQuestion;
- (void)showQuestionWithLeasedPromotionalView:(id)a0 duration:(double)a1;
- (void)showQuestionWithPageSheet:(id)a0;
- (void)commit;
- (void)reset;
- (id)liveTask;
- (void).cxx_destruct;

@end
