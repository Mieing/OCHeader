@class IESLiveMSequenceAnchorProgrammeView, MSeqAnchorRecordView, IESLiveCountTimer, NSTimer, IESLivePopupItem, NSString, IESLiveMSeqAnchorStore;
@protocol IESLiveTimeService, IESLiveContainerRouter;

@interface IESLiveMSequenceAnchorFragment : IESLiveRoomComponent <MSequenceAnchorReaction, HTSLiveMSequenceRouter>

@property (retain, nonatomic) MSeqAnchorRecordView *recordView;
@property (retain, nonatomic) IESLiveMSeqAnchorStore *store;
@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (nonatomic) BOOL isOnMSequenceRoom;
@property (nonatomic) BOOL isOnMSequenceWillStart;
@property (nonatomic) BOOL isOnMSequenceWillEnd;
@property (nonatomic) BOOL anchorInteractiveEnabled;
@property (nonatomic) long long alertBeforeEnd;
@property (nonatomic) long long forbidBeforeEnd;
@property (retain, nonatomic) id<IESLiveContainerRouter> containerRouter;
@property (retain, nonatomic) IESLivePopupItem *grabMicPopupItem;
@property (retain, nonatomic) IESLiveMSequenceAnchorProgrammeView *programmeView;
@property (retain, nonatomic) id<IESLiveTimeService> timeService;
@property (retain, nonatomic) NSTimer *showProgrammeTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)hideComponent;
- (void)showComponent;
- (void)remoteRoomDataReady:(id)a0;
- (void)mountDidFinishForLevel:(long long)a0;
- (id)realRoomOwner;
- (BOOL)isMSeqBackupRoom;
- (void)dismissMSeqProgrammeView;
- (BOOL)getCurrentRoomIsInOfficialChannel;
- (BOOL)isMSeqRoomWillEnd;
- (BOOL)isAnchorMSeqRoomWillStart;
- (id)toastStringBeforeEnd;
- (unsigned long long)currentMseqLayout;
- (void)showProgrammeView:(long long)a0;
- (void)startEnterMSeqCountDown:(unsigned long long)a0 onMSeqTime:(unsigned long long)a1;
- (void)startLeaveMSeqCountDown:(unsigned long long)a0;
- (void)showGrabMicWithMessage:(id)a0;
- (void)showMSeqProgrammeViewWithText:(id)a0;
- (void)updateRoomChannelExtra;
- (void)stopShowProgrammeTimer;
- (void)enterMseqAtFirst;
- (void)disableInteractiveBeforeStart:(BOOL)a0 text:(id)a1;
- (void)startCountDownGuide;
- (void)enableInteractive;
- (void)showCountDownTipView;
- (void)showEndProgramme:(long long)a0;
- (void)tr_trackGrabMicActionWithMessage:(id)a0 confirmGrab:(BOOL)a1;
- (void)tr_trackGrabMicAlertMuteWithMessage:(id)a0;
- (void)tr_trackGrabMicViewShowWithMessage:(id)a0;
- (void)trackProgramme:(BOOL)a0;
- (void)programmeViewTaped;
- (void)startShowProgrammeTimer:(long long)a0 startTime:(long long)a1;
- (void)updateProgrammeView:(long long)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (void)dealloc;

@end
