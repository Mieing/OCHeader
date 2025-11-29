@class IESLiveBizPerformanceStrategy, NSString, IESLiveBizPerformanceServiceImpl;
@protocol IESLiveBizPerformanceStoreDelegate;

@interface IESLiveBizPerformanceStore : NSObject <IESLivePerformanceChanged, IESLiveBizPerformanceStrategyOutput>

@property (retain, nonatomic) IESLiveBizPerformanceStrategy *performanceStrategy;
@property (retain, nonatomic) IESLiveBizPerformanceServiceImpl *serviceImpl;
@property (nonatomic) long long currentStrategyModeLevel;
@property (weak, nonatomic) id<IESLiveBizPerformanceStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoomModel:(id)a0 diContext:(id)a1;
- (BOOL)degradeModeEnable;
- (void)degradeSwitchChanged:(BOOL)a0;
- (BOOL)demoteModeEnable;
- (void)demoteSwitchChanged:(BOOL)a0;
- (void)upgradeSwitchChanged:(BOOL)a0;
- (id)currentDegradeScene;
- (BOOL)upgradeModeEnable;
- (id)currentUpgradeScene;
- (id)currentDemoteScene;
- (void)setupBizPerformance;
- (void)livePerformanceChangedLevel:(long long)a0 performanceInfo:(id)a1;
- (void)bizPerformanceStrategyOutputWith:(long long)a0 pushContent:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
