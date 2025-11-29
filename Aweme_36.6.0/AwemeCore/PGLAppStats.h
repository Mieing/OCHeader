@interface PGLAppStats : NSObject

@property (nonatomic) BOOL isFore;
@property (nonatomic) double foregroundTime;
@property (nonatomic) double runningTime;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)shareInstance;

- (int)installTime;
- (void)setForeTime:(double)a0;
- (int)firstRunTime;
- (void)setBackTime:(double)a0;
- (id)fetchAppStats;
- (void)updateAppStats;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
