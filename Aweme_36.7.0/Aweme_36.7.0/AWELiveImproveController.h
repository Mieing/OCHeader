@class NSTimer, NSMutableArray, NSString;

@interface AWELiveImproveController : NSObject <IESLiveStrategyEventDispatcherObserver>

@property (nonatomic) long long type;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) long long feedCurrentIndex;
@property (retain, nonatomic) NSMutableArray *feedDataSource;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ currentIndex;
@property (copy, nonatomic) id /* block */ dataSource;
@property (copy, nonatomic) id /* block */ deleteAction;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidAppear;
- (void)containerDidDisAppear;
- (void)containerFetchCompletionWithItems:(id)a0;
- (void)containerLoadMoreCompletionWithItems:(id)a0;
- (void)containerRefreshCompletionWithItems:(id)a0;
- (void)containerHotRefreshWithItems:(id)a0;
- (void)configureCellWithModel:(id)a0 atIndexPath:(id)a1;
- (BOOL)isContinuouslyLiveStream:(id)a0;
- (double)calculateAverageLoudness:(id)a0;
- (id)initWithContainerType:(long long)a0;
- (void)startRealTimeFeatureEvent;
- (void)addStrategyObserver;
- (void)stopRealTimeFeatureEvent;
- (void)removeStrategyObserver;
- (void)realTimeFeatureRefresh;
- (void)collectRoomInfo:(id)a0;
- (BOOL)strategyUpdateFactor:(id)a0 toValue:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
