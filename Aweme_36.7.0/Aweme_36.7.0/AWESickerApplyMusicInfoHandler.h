@class NSString, NSSet, NSArray, NSTimer, IESEffectModel, NSObject, AWEVideoPublishViewModel;
@protocol ACCRecordCutMusicServiceProtocol, ACCRecordSelectMusicService, OS_dispatch_queue;

@interface AWESickerApplyMusicInfoHandler : AWEStickerApplyBaseHandler <ACCCameraLifeCircleEvent, ACCRecordFlowServiceSubscriber>

@property (retain, nonatomic) id<ACCRecordSelectMusicService> musicService;
@property (retain, nonatomic) id<ACCRecordCutMusicServiceProtocol> recordCutMusicService;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *musicInfoMsgQueue;
@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (nonatomic) long long maxSendFps;
@property (nonatomic) unsigned long long currentInfoType;
@property (retain, nonatomic) NSSet *shouldSendMusicInfoKeys;
@property (retain, nonatomic) NSArray *musicInfoObservers;
@property (retain, nonatomic) NSTimer *fixedFrequencyTimer;
@property (nonatomic) double currentPlayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cameraService:(id)a0 pauseRecordWithError:(id)a1;
- (void)cameraService:(id)a0 didChangeBGMProgress:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)flowServiceDidRemoveLastSegment:(BOOL)a0;
- (void)camera:(id)a0 didRecvMessage:(id)a1;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (void)p_resetDefaultInfo;
- (void)p_observerMusicInfoChangeIfNeeded;
- (void)p_unobserverMusicInfoChangeIfNeeded;
- (void)p_handlePickMusicModel:(id)a0 selectFrom:(long long)a1 isFirstApplyProp:(BOOL)a2;
- (void)p_handleTaskId:(long long)a0 json:(id)a1;
- (double)p_getDurationWithMusicModel:(id)a0 musicAsset:(id)a1;
- (double)p_getTimeIntervalWithBGMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(double)a1;
- (void)p_invalidFixedFrequencyTimerIfNeeded;
- (void)p_sendMusicInfoIfNeeded;
- (void)p_restoreCurrentPlayTimeWithApplyProp:(BOOL)a0;
- (void)p_handleCancelMusicModel;
- (void)p_sendDefaultMusicInfoIfNeededWithApplyProp:(BOOL)a0;
- (BOOL)p_hasFullInfoWithModel:(id)a0;
- (BOOL)hasValidLyricUrlWithModel:(id)a0;
- (id)p_shouldRefreshKeysForMusicModel;
- (void)p_asyncSendMusicInfoMessageToEffectWithStatus:(unsigned long long)a0 bodyAssembler:(id /* block */)a1;
- (id)p_assembleBodyWithSendKeys:(id)a0 musicModel:(id)a1 audioRange:(struct _HTSAudioRange { double x0; double x1; })a2 musicAsset:(id)a3 currentPlayTime:(double)a4;
- (void)handlerDidBecomeActive;
- (void).cxx_destruct;

@end
