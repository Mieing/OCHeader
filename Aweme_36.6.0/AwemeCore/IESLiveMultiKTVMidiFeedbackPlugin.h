@class NSString, NSTimer, IESLiveMultiKTVApi, NSNumber, UIView;
@protocol IESLiveMultiKTVStageProvider;

@interface IESLiveMultiKTVMidiFeedbackPlugin : NSObject <IESLiveSEIListener, IESLiveMultiKTVStageActions, IESLiveMultiKTVStagePluginProtocol>

@property (retain, nonatomic) IESLiveMultiKTVApi *api;
@property (retain, nonatomic) NSTimer *hideTimer;
@property (retain, nonatomic) NSNumber *remotePlayingMusicID;
@property (retain, nonatomic) NSNumber *reportMusicID;
@property (retain, nonatomic) UIView *feedbackView;
@property (copy, nonatomic) id /* block */ hideAction;
@property (nonatomic) BOOL readyToUploadAlog;
@property (nonatomic) long long isCPUOptimize;
@property (nonatomic) BOOL isRoomAnchor;
@property (weak, nonatomic) id<IESLiveMultiKTVStageProvider> multiKTVStageProvider;
@property (nonatomic) double duration;
@property (nonatomic) BOOL couldReceiveBackupSEI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isActive;

- (void)didSetAttachingDIContext;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (BOOL)enableBackupSEI;
- (void)updateListenerPlayingTime:(double)a0;
- (BOOL)isMidiFeedBackShowing;
- (void)updateKTVStageState:(unsigned long long)a0;
- (void)updateSingerPlayingTime:(double)a0;
- (void)reportMidiScoreIfNeeded;
- (void)didDeactivated;
- (void)updateRemotePlayingMusicID:(id)a0;
- (void)updatePlayingUser:(id)a0;
- (id)currentPlayMusic;
- (id)currentMusicID;
- (void)p_hideHotAndRankView;
- (void)showMidiFeedbackViewWithData:(id)a0 orderInfo:(id)a1 score:(double)a2;
- (void)p_showFeedbackViewWithResult:(id)a0;
- (void)p_showFeedbackRecordViewWithResult:(id)a0;
- (void)p_closeHideTimer;
- (void)showMidiFeedbackViewWithSEI:(id)a0;
- (void).cxx_destruct;

@end
