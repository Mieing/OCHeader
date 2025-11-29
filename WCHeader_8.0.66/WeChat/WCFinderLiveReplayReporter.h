@class NSString, MMFinderLiveTaskId;

@interface WCFinderLiveReplayReporter : NSObject <IWCFinderLiveReplayReporterCallback>

@property (nonatomic) unsigned long long enterTime;
@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) NSString *reportUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (id)init;
- (void)enterReplay;
- (void)onEnterReplayWithObjectId:(id)a0 entryType:(id)a1;
- (void)onExposeReplayWithObjectId:(id)a0 entryType:(id)a1;
- (void)onExposeReplayWithObjectId:(id)a0 entryType:(id)a1 objectType:(unsigned long long)a2 pageSubType:(unsigned long long)a3;
- (void)onExposeReplayPayButtonWithObjectId:(id)a0 entryType:(id)a1;
- (void)onClickReplayPayButtonWithObjectId:(id)a0 entryType:(id)a1;
- (void)onClickReplayPayConfirmButtonWithObjectId:(id)a0 entryType:(id)a1;
- (void)onClickReplayAgreementConfirmButtonWithObjectId:(id)a0 entryType:(id)a1;
- (void)onClickReplayAgreementCancelButtonWithObjectId:(id)a0 entryType:(id)a1;
- (void)onExposeRechargePanelWithObjectId:(id)a0 entryType:(id)a1 pageSubType:(unsigned long long)a2;
- (void)onExposeRechargeSuccessWithObjectId:(id)a0 entryType:(id)a1;
- (void)onPaidSuccessWithObjectId:(id)a0 entryType:(id)a1 amount:(long long)a2 duration:(double)a3;
- (void)onLiveRecordDurationWithObjectId:(id)a0 entryType:(id)a1 duration:(double)a2;
- (void)onPurchaseSucceededWithCoinAmount:(unsigned int)a0 atTimeInMillisecond:(unsigned long long)a1;
- (void)onFinishWatching;
- (void)onSharingToTarget:(unsigned long long)a0 objectId:(id)a1 entryType:(id)a2 isFastForward:(BOOL)a3 usernameList:(id)a4;
- (void)onStartWatchingReplayWithObjectId:(id)a0 entryType:(id)a1;
- (void)onClickShareWithObjectId:(id)a0 entryType:(id)a1;
- (void)onOrientationClicked:(long long)a0 objectId:(id)a1 entryType:(id)a2;
- (void)onMinimizeWithObjectId:(id)a0 entryType:(id)a1 isInteractivePan:(BOOL)a2;
- (void)onPauseReplayWithObjectId:(id)a0 entryType:(id)a1 currentTime:(unsigned long long)a2;
- (void)onSeekReplayWithObjectId:(id)a0 entryType:(id)a1 fromTimeMS:(unsigned long long)a2 toTimeMS:(unsigned long long)a3 isAtGreateTime:(BOOL)a4;
- (void)onClickComplainReplayWithObjectId:(id)a0 entryType:(id)a1;
- (void)onClickToggleHiddenReplayWithObjectId:(id)a0 entryType:(id)a1 hidden:(BOOL)a2;
- (void)onDeleteReplayWithObjectId:(id)a0 entryType:(id)a1;
- (void)onProgressBarGreateTimeDotExposeWithObjectId:(id)a0 entryType:(id)a1;
- (void)onProgressBarGreateTimeDotClickWithObjectId:(id)a0 entryType:(id)a1;
- (void)onProgressBarGreateTimePreviewPlayBtnClickWithObjectId:(id)a0 entryType:(id)a1;
- (void)onProgressBarGreateTimeDotSecondClickWithObjectId:(id)a0 entryType:(id)a1;
- (void)onGreateTimeBtnExposeWithObjectId:(id)a0 entryType:(id)a1;
- (void)onGreateTimeBtnClickWithObjectId:(id)a0 entryType:(id)a1;
- (void)onGreateTimeListViewExposeWithObjectId:(id)a0 entryType:(id)a1;
- (void)onGreateTimeListItemClickWithObjectId:(id)a0 entryType:(id)a1;
- (void)onRateBtnExposeWithObjectId:(id)a0 entryType:(id)a1;
- (void)onRateBtnClickWithObjectId:(id)a0 entryType:(id)a1;
- (void)onRateSelectWithObjectId:(id)a0 entryType:(id)a1 rate:(double)a2;
- (void)onRateLongPressChangeWithObjectId:(id)a0 entryType:(id)a1 fromRate:(double)a2;
- (unsigned long long)getReplayDurationInMS;
- (void)reportLiveReplayEvent:(id)a0 params:(id)a1;
- (id)replaceCommaToSemicolon:(id)a0;
- (id)replayLiveTask;
- (unsigned long long)transformStartScene;
- (unsigned long long)transformIsFreeLive;
- (void).cxx_destruct;

@end
