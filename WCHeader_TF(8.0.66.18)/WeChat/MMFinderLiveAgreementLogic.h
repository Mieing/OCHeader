@class MMLiveTaskId;

@interface MMFinderLiveAgreementLogic : NSObject

@property (readonly, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) BOOL isViewingAgreement;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (BOOL)checkLiveAgreement;
- (id)currentAgreementInfo;
- (BOOL)isLivePolicyCheckedElsewhere;
- (id)liveTask;
- (void)updateLiveAgreementCache;
- (id)getCachedLiveAgreement;
- (void)mockAgreementInfoIfNeeded;
- (void).cxx_destruct;

@end
