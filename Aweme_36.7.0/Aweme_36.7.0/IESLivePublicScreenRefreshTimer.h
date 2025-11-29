@class NSMutableDictionary, IESLivePublicScreenRefreshConfig, IESLiveGCDTimer;

@interface IESLivePublicScreenRefreshTimer : NSObject

@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (copy, nonatomic) id /* block */ configChangedBlock;
@property (nonatomic) BOOL refreshTimerRunning;
@property (retain, nonatomic) IESLivePublicScreenRefreshConfig *currentRefreshConfig;
@property (retain, nonatomic) NSMutableDictionary *refreshConfigs;

- (void)stopNodesCommit;
- (void)startNodesCommit;
- (void)setupRefreshTimer;
- (id)initWithRefreshBlock:(id /* block */)a0 configChangedBlock:(id /* block */)a1 config:(id)a2;
- (void)executeRefreshBlockImmediately;
- (void)updateRefreshConfigAndResetTimer:(id)a0;
- (void)removeRefreshConfigWithPriorityAndResetTimer:(unsigned long long)a0;
- (void)invalidateRefreshTimer;
- (void)resetRefreshTimer;
- (void)resetCurrentConfigAndTimerIfNeeded;
- (void).cxx_destruct;
- (void)dealloc;

@end
