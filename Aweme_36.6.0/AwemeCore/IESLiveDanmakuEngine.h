@class NSString, HTSEventForwardingView, IESLiveObservableMutableArray, NSMutableArray;
@protocol IESLiveDanmakuChannelManagerProtocol, IESLiveDanmakuEngineDelegate, IESLiveDanmakuEngineSettingsProtocol, IESLiveDanmakuEngineDataSource;

@interface IESLiveDanmakuEngine : NSObject <IESLiveDanmakuChannelManagerDelegate>

@property (retain, nonatomic) id<IESLiveDanmakuChannelManagerProtocol> channelManager;
@property (retain, nonatomic) IESLiveObservableMutableArray *danmakuQueue;
@property (retain, nonatomic) IESLiveObservableMutableArray *highPriorityDanmakuQueue;
@property (nonatomic) BOOL didStart;
@property (retain, nonatomic) id<IESLiveDanmakuEngineSettingsProtocol> settings;
@property (retain, nonatomic) HTSEventForwardingView *contentView;
@property (retain, nonatomic) id<IESLiveDanmakuChannelManagerProtocol> normalChannelManager;
@property (nonatomic) unsigned long long normalMAXWattingCount;
@property (weak, nonatomic) id<IESLiveDanmakuEngineDelegate> delegate;
@property (weak, nonatomic) id<IESLiveDanmakuEngineDataSource> dataSource;
@property (readonly, nonatomic) NSMutableArray *danmakuQueueArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllRunningDanmuku;
- (id)initWithContentView:(id)a0 settings:(id)a1;
- (void)channelIsAvailableOfChannelManager:(id)a0;
- (void)runNormalAnimation:(id)a0 onChannel:(id)a1;
- (void)updateCurrentFeatureInfo;
- (void)removeAllNormalDanmuku;
- (void)runNormalDanmukuWithNode:(id)a0;
- (void)loadChannelManager:(id)a0;
- (void)setDanmakuQueueMaxCacheCount:(long long)a0;
- (void)emptyNormalDanmukuQueue;
- (void).cxx_destruct;
- (void)start;

@end
