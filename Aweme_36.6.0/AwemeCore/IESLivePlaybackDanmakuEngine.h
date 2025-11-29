@class NSString, IESLivePlaybackDanmakuChannelManager, NSMutableArray, IESLiveDanmakuEngineSettings;

@interface IESLivePlaybackDanmakuEngine : IESLiveDanmakuEngine <IESLiveDanmakuChannelManagerDelegate, IESLivePlaybackDanmakuEngineProtocol>

@property (retain, nonatomic) IESLivePlaybackDanmakuChannelManager *normalChannelManager;
@property (retain, nonatomic) IESLiveDanmakuEngineSettings *settings;
@property (retain, nonatomic) NSMutableArray *normalDanmukuQueue;
@property (retain, nonatomic) NSMutableArray *highPriorityNormalDanmukuQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPlaybackWithContentView:(id)a0 settings:(id)a1;

- (id)initWithContentView:(id)a0 settings:(id)a1;
- (void)channelIsAvailableOfChannelManager:(id)a0;
- (void)removeAllNormalDanmuku;
- (void)runNormalDanmukuWithNode:(id)a0;
- (void)cleanDanmakuQueue;
- (BOOL)isCurrentUserEnableNormalDanmaku;
- (long long)countOfOfficialInHighPriorityQueue;
- (void)saveDanmakuNodeInQueue:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)resume;

@end
