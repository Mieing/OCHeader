@interface GamePullMsgControlInfo : NSObject

@property (nonatomic) int startSecond;
@property (nonatomic) double time;
@property (nonatomic) int count;
@property (nonatomic) unsigned long long minInterval;

+ (id)getCurrentControlInfoFromKv;
+ (id)getCurrentControlInfo;

- (void)syncToKv;
- (BOOL)checkIsSameDay:(double)a0;

@end
