@class FinderLiveBackendPeriodSeiInfo, MMLiveTaskId, MMLiveBackendSeiMicMsgWrap, MMLiveAudioRoomSEIConnectMicMsg;
@protocol MMLiveConnectMicSEIHandlerDelegate;

@interface MMLiveConnectMicSEIHandler : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (weak, nonatomic) id<MMLiveConnectMicSEIHandlerDelegate> logicDelegate;
@property (nonatomic) BOOL useBackendSeiInfo;
@property (nonatomic) BOOL shouldUpdateMicUsersInfoAfterReceiveAudioRoomAnchorSei;
@property (retain, nonatomic) FinderLiveBackendPeriodSeiInfo *lastBackendPeriodSeiInfo;
@property (retain, nonatomic) MMLiveBackendSeiMicMsgWrap *backendSeiMicMsgWrap;
@property (nonatomic) BOOL canSwitchBackendSei;
@property (nonatomic) unsigned long long lastReceiveAudioRoomAnchorSeiTime;
@property (nonatomic) unsigned long long firstLiveStreamServerTimeUpdatedTime;
@property (nonatomic) unsigned long long lastLiveStreamServerTimeUpdatedTime;
@property (nonatomic) unsigned long long lastLiveStreamServerTime;
@property (readonly, nonatomic) MMLiveAudioRoomSEIConnectMicMsg *audioRoomSeiMicMsg;

- (id)initWithTaskId:(id)a0 andDelegate:(id)a1;
- (id)getLiveTask;
- (void)resetBackendSeiInfo;
- (void)configBackendSeiInfo;
- (void)updateCanSwitchBackendSeiTimeValues;
- (BOOL)checkAndUpdateBackendSeiMicMsgWrap;
- (id)generateAudioRoomSeiMicMsgFromBackendSeiInfo:(id)a0;
- (void)handleAudioRoomSceneChangedTo:(unsigned long long)a0;
- (BOOL)handleAudioRoomAnchorSEIMicMsgInfoUpdated:(id)a0;
- (void)handlePlayingViaCdnChanged:(BOOL)a0;
- (void)handleFinderLiveBackendPeriodSeiInfoUpdated:(id)a0;
- (void)handleLiveStreamServerTimeUpdated:(unsigned long long)a0;
- (void).cxx_destruct;

@end
