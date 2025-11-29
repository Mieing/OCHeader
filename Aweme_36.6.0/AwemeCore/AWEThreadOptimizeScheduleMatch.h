@interface AWEThreadOptimizeScheduleMatch : NSObject

@property (nonatomic) long long cpuUsageLowerRange;
@property (nonatomic) long long cpuUsageUpperRange;
@property (nonatomic) double mainThreadCPUUsageLowerRange;
@property (nonatomic) double mainThreadCPUUsageUpperRange;
@property (nonatomic) double currentThreadCPUUsageLowerRange;
@property (nonatomic) double currentThreadCPUUsageUpperRange;
@property (nonatomic) int *currentThreadRunStateList;
@property (nonatomic) unsigned long long currentThreadRunStateListSize;
@property (nonatomic) int *currentThreadFlagList;
@property (nonatomic) unsigned long long currentThreadFlagListSize;
@property (nonatomic) unsigned int *blockQoSList;
@property (nonatomic) unsigned long long blockQoSListSize;
@property (nonatomic) unsigned int *threadQoSList;
@property (nonatomic) unsigned long long threadQoSListSize;
@property (nonatomic) unsigned int *fromThreadQoSList;
@property (nonatomic) unsigned long long fromThreadQoSListSize;
@property (nonatomic) char **threadNameList;
@property (nonatomic) unsigned long long threadNameListSize;
@property (nonatomic) char **threadNameLikeList;
@property (nonatomic) int **threadNameLikeNextList;
@property (nonatomic) unsigned long long threadNameLikeListSize;
@property (nonatomic) char **excludeThreadNameList;
@property (nonatomic) int **excludeThreadNameNextList;
@property (nonatomic) unsigned long long excludeThreadNameListSize;
@property (nonatomic) char **excludeThreadNameLikeList;
@property (nonatomic) unsigned long long excludeThreadNameLikeListSize;
@property (nonatomic) long long fromMainThread;
@property (nonatomic) long long mainThread;
@property (readonly, nonatomic) int **excludeThreadNameLikeNextList;

- (void)makeNextArray:(int *)a0 forString:(char *)a1 limit:(int)a2;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
