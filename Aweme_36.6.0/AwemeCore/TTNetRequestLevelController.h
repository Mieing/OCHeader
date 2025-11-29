@class NSLock, NSMutableArray, NSSet;

@interface TTNetRequestLevelController : NSObject

@property double p0LastPassTime;
@property int p0Count;
@property int p1Count;
@property (nonatomic) BOOL requestLevelControlEnabled;
@property (retain) NSMutableArray *p1WaitingQueue;
@property (retain) NSLock *queueLock;
@property BOOL requestLevelControlTNCEnabled;
@property (retain) NSLock *tncParamLock;
@property (retain, nonatomic) NSSet *p0PathSet;
@property (retain, nonatomic) NSSet *p2PathSet;
@property int p1Random;
@property long long p0Countdown;
@property int p1MaxCount;

+ (id)shareInstance;

- (void)releaseP1Request;
- (BOOL)isPathInSet:(id)a0 path:(id)a1;
- (BOOL)checkP0Done;
- (BOOL)isRequestLevelControlEnabled;
- (int)getLevelForRequestPath:(id)a0;
- (BOOL)maybeAddP1Task:(id)a0;
- (void)notifyTaskCancel:(id)a0;
- (void)notifyTaskFinish:(id)a0;
- (void)getReqCtlConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;

@end
