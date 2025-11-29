@class MMTimer, NSMutableDictionary, NSString, NSMutableArray;

@interface WAPerformanceIndexObject : MMObject

@property (retain, nonatomic) NSMutableArray *performanceIndexs;
@property (retain, nonatomic) MMTimer *timer;
@property (retain, nonatomic) NSMutableDictionary *sceneCountDic;
@property (nonatomic) unsigned int performanceIndexReportGap;
@property (nonatomic) BOOL shouldReport;
@property (copy, nonatomic) NSString *instanceId;
@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) BOOL isGame;
@property (copy, nonatomic) NSString *libStringVersion;

- (id)initWithPerformanceIndexs:(id)a0 shouldReport:(BOOL)a1;
- (void)dealloc;
- (void)createPerformanceIndexs:(id)a0;
- (void)taskDidFinishColdLaunch;
- (void)taskDidEnterBackground;
- (void)taskDidEnterForeground;
- (void)taskDidEnterSuspend;
- (void)taskDidDie;
- (void)reportPerformanceIndexInScene:(unsigned long long)a0;
- (void)recordRegisteredIndexesInScene:(unsigned long long)a0;
- (void)onTimer;
- (void)releaseTimer;
- (void).cxx_destruct;

@end
