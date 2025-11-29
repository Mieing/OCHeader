@class NSString;

@interface MemoryBalanceManager : NSObject <MemoryBalanceProtocol>

@property (retain, nonatomic) MemoryBalanceManager *memoryBalanceManager;
@property (nonatomic) double monitorTimeInterval;
@property (nonatomic) long long memoryDangerTopLevelInteger;
@property (nonatomic) long long memoryDangerSecondaryLevelInteger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)startMemoryMonitor;
- (BOOL)isMemoryDangerTopLevel;
- (void)predictMemoryUsageWithScene:(id)a0;
- (BOOL)isMemoryDangerSecondLevel;
- (void)p_startScheduleMemeory;
- (void)p_fetchCurrentMemoryUsage;
- (void)postMemoryBalanceNotificationWith:(id)a0;
- (long long)setPageMemoryRiseNumber:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
