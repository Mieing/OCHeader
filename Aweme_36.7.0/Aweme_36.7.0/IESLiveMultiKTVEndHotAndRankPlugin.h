@class NSTimer, NSNumber, IESLiveCombineTwoTuple, NSString, IESLiveMultiKTVStageSingingListSongEndHotAndRankView, IESLiveLinkMicAudienceGetKtvSingingHotResultResponse_ResponseData, IESLiveMultiKTVApi, IESLiveKtvSongStruct;
@protocol IESLiveRoomService, IESLiveMultiKTVStageProvider;

@interface IESLiveMultiKTVEndHotAndRankPlugin : NSObject <IESLiveSEIListener, IESLiveMultiKTVStageActions, IESLiveMultiKTVStagePluginProtocol, IESLiveMultiKTVHotRankProvider>

@property (retain, nonatomic) IESLiveMultiKTVApi *api;
@property (nonatomic) double playTime;
@property (nonatomic) unsigned long long multiKTVState;
@property (retain, nonatomic) IESLiveLinkMicAudienceGetKtvSingingHotResultResponse_ResponseData *ktvSingingHotResult;
@property (copy, nonatomic) id /* block */ sendMessageBlock;
@property (retain, nonatomic) IESLiveMultiKTVStageSingingListSongEndHotAndRankView *hotAndRankView;
@property (retain, nonatomic) NSTimer *hotAndRankViewHideTimer;
@property (retain, nonatomic) NSNumber *remotePlayingMusicID;
@property (retain, nonatomic) IESLiveKtvSongStruct *recentPlayingMusic;
@property (nonatomic) BOOL hotAndRankViewShowing;
@property (nonatomic) BOOL hasFetch;
@property (nonatomic) BOOL hasSendSyncMessage;
@property (nonatomic) long long realStartTime;
@property (nonatomic) long long showViewNumber;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) double duration;
@property (nonatomic) BOOL isCPUOptimize;
@property (retain, nonatomic) IESLiveCombineTwoTuple *audienceHotAndRankViewHasShowInThisSong;
@property (weak, nonatomic) id<IESLiveMultiKTVStageProvider> multiKTVStageProvider;
@property (nonatomic) BOOL couldReceiveBackupSEI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isActive;

- (BOOL)isPanelShowing;
- (void)didSetAttachingDIContext;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (BOOL)enableBackupSEI;
- (void)updateListenerPlayingTime:(double)a0;
- (void)updateSingerPlayingTime:(double)a0;
- (void)updateRemotePlayingMusicID:(id)a0;
- (BOOL)audienceHotAndRankViewHasShowForSongId:(id)a0 singerId:(id)a1 newShowViewNumber:(long long)a2;
- (void)p_realShowWithMusicID:(id)a0;
- (id)currentPlayMusic;
- (id)currentMusicID;
- (double)getHotAndRankShowTime;
- (void)p_sendMessageWithMusicID:(id)a0;
- (void)fetchHotRankResultWithMusicID:(id)a0;
- (void)p_invalidHotAndRankViewHideTimer;
- (void)p_hideHotAndRankView;
- (void)tr_showSingingListEntranceViewWithMusicID:(id)a0;
- (void)setAudienceHotAndRankViewHasShowForSongId:(id)a0 singerId:(id)a1;
- (void)p_sendShowEndMessageIfNeededWithMusicID:(id)a0;
- (void)tr_clickedSingingListEntranceView;
- (void)goToHotRank;
- (void)goToRankList;
- (void)tr_followUser;
- (BOOL)p_isSelfAction;
- (void)updateState:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)stop;
- (unsigned long long)curStyle;

@end
