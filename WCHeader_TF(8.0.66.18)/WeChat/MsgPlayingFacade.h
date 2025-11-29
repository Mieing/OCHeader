@class CMessageWrap, NSString, AutoplayController, MinimizeNewTransitionController, MsgPlayingMinimizeController, PlayingController, NSMutableArray, CBaseContact;

@interface MsgPlayingFacade : MMUserService <AutoplayControllerDelegate, AutoPlayControllerExt, MsgPlayingMinimizeControllerDelegate, IAudioReceiverExt, MinimizeNewTransitionControllerDelegate, IContactMgrExt, IMMNewSessionMgrExt, IMsgExt, IMsgRevokeExt, MMServiceProtocol, WCAudioModuleDelegate> {
    PlayingController *m_playingController;
    AutoplayController *m_autoplayController;
    MsgPlayingMinimizeController *m_minimizeController;
}

@property (retain, nonatomic) CBaseContact *contact;
@property (retain, nonatomic) CMessageWrap *currentInterruptMsg;
@property (retain, nonatomic) NSMutableArray *voiceMsgReporters;
@property (readonly, nonatomic) MinimizeNewTransitionController *transitionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportMsg:(id)a0 info:(struct MsgPlayingReportInfo { int x0; int x1; int x2; })a1;
+ (void)tryReportEnterSession:(id)a0 info:(struct MsgPlayingReportInfo { int x0; int x1; int x2; })a1;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onEnterSession:(id)a0;
- (void)onSessionAppear:(id)a0;
- (void)onSessionDisappear:(id)a0;
- (void)onLeaveSession:(id)a0 touchCorner:(BOOL)a1;
- (void)showMinimizeView;
- (void)hideMinimizeView;
- (BOOL)isShowingMinimizeView;
- (void)startPlayingMsg:(id)a0 playArgs:(struct MsgStartPlayArgs { unsigned int x0; BOOL x1; })a1;
- (void)stopPlayingMsg:(struct MsgStopPlayArgs { id x0; int x1; int x2; })a0;
- (void)pause;
- (void)resume;
- (BOOL)isMsgPlaying:(id)a0;
- (BOOL)isPlaying;
- (id)currentPlayingMsg;
- (int)currentPlayTime;
- (int)lastPlayPosition:(id)a0;
- (void)setPlayRate:(double)a0;
- (void)seekToTime:(unsigned int)a0;
- (void)switchToEarMode:(BOOL)a0;
- (id)reporterWithMsg:(id)a0;
- (void)StartPlayMessage:(id)a0;
- (void)StartPlayMessage:(id)a0 FromTime:(unsigned int)a1;
- (void)hideMinimizeViewIfNeed;
- (BOOL)canShowMinimizeView:(BOOL)a0;
- (void)showMinimizeViewIfNeed;
- (void)showMinimizeViewIfNeed:(BOOL)a0;
- (void)initMinimizeViewTransitionController;
- (void)clearPlayList;
- (void)setMsgPlayed:(id)a0;
- (void)OnBeginPlaying:(id)a0 success:(BOOL)a1;
- (void)OnPausePlaying:(id)a0;
- (void)OnEndPlaying:(id)a0 isForceStop:(BOOL)a1;
- (id)GetDownMsgFromID:(unsigned int)a0 Limit:(int)a1 LeftCount:(unsigned int *)a2;
- (id)GetFirstUnreadMsg;
- (void)autoPlayMsg:(id)a0;
- (BOOL)shouldStopAutoPlayUnRead;
- (void)onAutoPlayEndWithMsg:(id)a0;
- (void)onClickMinimizeView;
- (void)onCloseMinimizeView;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)audioModuleInterruptionEnd:(id)a0 param:(id)a1;
- (BOOL)useNewMinimizeTransition:(id)a0 withTransitionType:(unsigned int)a1;
- (id)getMinimizationTransitionContext;
- (void)onMinimizeTransitionEnd:(unsigned int)a0 isComplete:(BOOL)a1;
- (void)onDeleteContact:(id)a0;
- (void)onDeleteSessionOfUser:(id)a0;
- (void)onDidDeleteAllSession;
- (void)OnRevokeMsg:(id)a0 MsgWrap:(id)a1 ResultCode:(unsigned int)a2 ResultMsg:(id)a3 EducationMsg:(id)a4;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnDelMsg:(id)a0 DelAll:(BOOL)a1;
- (void)OnMsgRevoked:(id)a0 n64MsgId:(long long)a1;
- (void).cxx_destruct;

@end
