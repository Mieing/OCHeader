@class NSString;

@interface WAPerformanceIndexBase : MMObject

@property (nonatomic) unsigned long long indexNumOnInit;
@property (nonatomic) unsigned long long currentAvgIndexNum;
@property (nonatomic) unsigned long long currentMaxIndexNum;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) unsigned int recordedCount;
@property (nonatomic) unsigned long long lastEnterForegroundIndexNum;
@property (nonatomic) long long veryFirstForegroundIncreaseNum;
@property (nonatomic) long long foregroundTotalIncreaseNum;
@property (nonatomic) long long lifeCycleTotalIncreaseNum;

- (id)init;
- (unsigned long long)getInitIndexNum;
- (void)recordIndex;
- (unsigned long long)getAvgIndexNum;
- (unsigned long long)getMaxIndexNum;
- (unsigned long long)getCurrentIndexNum;
- (unsigned int)getIndexType;
- (void).cxx_destruct;

@end
