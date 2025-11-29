@class NSString, NSMutableDictionary;
@protocol IESLiveMonitorService, IESLiveLoggerDowngradeService;

@interface IESLivePerformanceStrategyCenter : NSObject <IESLiveStrategyEventDispatcherObserver>

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL firstCallback;
@property (nonatomic) BOOL enableRoomStrategy;
@property (retain, nonatomic) id<IESLiveMonitorService> monitor;
@property (retain, nonatomic) id<IESLiveLoggerDowngradeService> alog;
@property (nonatomic) long long permission;
@property (retain, nonatomic) NSMutableDictionary *strategyBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)enterLiveRoom;
- (void)updateLiveRoom;
- (void)eventDispatcherWillDispatchValue:(id)a0 withFactorKey:(id)a1;
- (void)exitLiveRoom;
- (void)setupSceneStrategy;
- (void)setupRoomStrategy;
- (void)cleanupStrategy;
- (void)addStrategyName:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
