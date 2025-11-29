@class MMLiveTask, MMLiveFaceEncodeTask, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MMLiveFaceEncodeLogic : NSObject

@property (weak, nonatomic) MMLiveTask *liveTask;
@property (retain) MMLiveFaceEncodeTask *currEncodeTask;
@property (retain, nonatomic) NSMutableArray *encodeTaskList;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *encodingQueue;
@property (readonly, nonatomic) unsigned long long maxEncodeTaskCnt;
@property (readonly, nonatomic) double seiFreqLimitTime;
@property (nonatomic) int sendFPS;
@property (readonly, nonatomic) BOOL isOverFreqLimit;
@property double lastSEISendTime;

- (id)initWithLiveTask:(id)a0;
- (void)initDefaultData;
- (void)dealloc;
- (void)encodeAlphaBuffer:(char *)a0 width:(int)a1 height:(int)a2;
- (void)stopEncode;
- (void)addEncodeTask:(id)a0;
- (id)getNextEncodeTask;
- (void)checkEncodeTasksOverMaxLimit;
- (void)clearEncodeTaskList;
- (void)tryEncodeNextTask;
- (BOOL)checkEnableEncodeNext;
- (void)sendSeiWithContentStr:(id)a0;
- (void)sendSeiWithContentData:(id)a0;
- (void)runAsyncOnEncodeQueue:(id /* block */)a0;
- (void)runSyncOnEncodeQueue:(id /* block */)a0;
- (void).cxx_destruct;

@end
