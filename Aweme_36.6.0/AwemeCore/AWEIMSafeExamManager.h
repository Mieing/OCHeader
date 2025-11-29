@class NSArray, NSString;

@interface AWEIMSafeExamManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSArray *controllerInfoArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)reportFailedAnswerResults;
- (void)onExamAnswerResult:(id)a0;
- (long long)examAnswerStatusForMessage:(id)a0;
- (id)__examControlInfos;
- (id)__failReportInfoStoreKey;
- (void)__reportFailedAnswerResults:(id)a0;
- (void)__onExamAnswerResult:(id)a0;
- (BOOL)__needAnswerExam:(id)a0 message:(id)a1;
- (BOOL)__isValidSuccessAnswered:(id)a0 message:(id)a1;
- (BOOL)__isExeedRetryTimes:(id)a0 message:(id)a1;
- (id)__answerCountStoreKeyForExamID:(id)a0;
- (void)__updateAnswerCountForExamID:(id)a0;
- (id)__answerSucceedValidTimeStoreKeyForExamID:(id)a0;
- (void)__clearAnswerCountForExamID:(id)a0;
- (void)__saveReportFailExamInfo:(id)a0;
- (void)__removeReportFailExamInfo:(id)a0;
- (void)__updateServerAnswerPassResultWithExamId:(long long)a0 subID:(long long)a1 examResult:(long long)a2 tryTimes:(long long)a3 completion:(id /* block */)a4;
- (id)__controlInfoWithExamInfo:(id)a0;
- (BOOL)needElderAnswerForMessage:(id)a0;
- (void)openSafeExamPageWithInfo:(id)a0 message:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
