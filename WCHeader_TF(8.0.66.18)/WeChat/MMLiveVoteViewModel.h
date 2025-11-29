@class MMTimer, FinderLiveVotingInfo, MMFinderLiveTaskId, NSString;

@interface MMLiveVoteViewModel : NSObject <WCFinderLiveExt, UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMTimer *countdownTimer;
@property (nonatomic) unsigned int remainTime;
@property (nonatomic) BOOL isAttending;
@property (retain, nonatomic) FinderLiveVotingInfo *voteInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (BOOL)canManageVote;
- (BOOL)isVoteRunning;
- (BOOL)isVoteComputing;
- (BOOL)isVoteEnd;
- (void)cancelCurrentVoting;
- (void)attendVoteOnSelectIndex:(long long)a0;
- (void)updateLocalInfoOnAttendSuccessWith:(long long)a0;
- (void)updateLocalChoiceListOnAttendSuccessWith:(long long)a0;
- (id)getRadioAttendChoicesOnClickIndex:(long long)a0;
- (id)getCheckAttendChoicesOnClickIndex:(long long)a0;
- (BOOL)couldUpdateWith:(id)a0;
- (void)countdownTimerCallBack;
- (BOOL)checkAndClearVoteForSpamCheckIfNeeded;
- (void)updateVoteInfo:(id)a0 fromMsg:(BOOL)a1;
- (void)updateModelOnVoteInfoUpdate;
- (void)onGetLiveVoteInfo:(id)a0 forTaskId:(id)a1;
- (id)currentLiveTask;
- (void)safeMinusCountOfChoice:(id)a0;
- (BOOL)hasSelfParticipantIn:(id)a0;
- (void).cxx_destruct;

@end
