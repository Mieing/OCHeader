@class NSString;

@interface AWETheaterWatchTaskOutputer : NSObject <AWETheaterWatchTaskOutputerProtocol>

@property (class, retain, nonatomic) NSString *activityId;

@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) BOOL inVideoHallScene;
@property (nonatomic) BOOL finished;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *module;
@property (copy, nonatomic) NSString *videoHallPreviousPage;
@property (nonatomic) long long videoHallPageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentWatchTask;
+ (void)setLvModuleStr:(id)a0;
+ (id)lvModuleString;

- (void)taskDidEnterScene:(id)a0;
- (void)taskDidLeveaScene:(id)a0;
- (void)taskDidFinishTask;
- (void)taskDidPauseForReason:(id)a0;
- (void)taskWillStartTiming;
- (void)taskDidStop;
- (void)taskUpdateProgress:(id)a0 withTotalTime:(id)a1;
- (void)trackTaskEntraceShow;
- (void)trackTaskEntraceFinish;
- (id)currentEnterFrom;
- (id)previousPageFromWatchVideoHall;
- (id)trackCommonParamters;
- (id)initWithTask:(id)a0;
- (void).cxx_destruct;
- (void)taskDidStart;

@end
