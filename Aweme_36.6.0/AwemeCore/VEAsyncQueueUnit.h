@class NSThread, NSString, NSCondition, NSLock, NSMutableArray;
@protocol VEProcessSampleDelegate;

@interface VEAsyncQueueUnit : NSObject <VEAppStatusProtocol, VEProcessSampleDelegate>

@property (retain, nonatomic) NSMutableArray *sampleDataQueue;
@property (retain, nonatomic) NSLock *sampleDataQueueLock;
@property (retain, nonatomic) NSCondition *videoQueCont;
@property (retain, nonatomic) NSCondition *videoEmptyCont;
@property (retain, nonatomic) NSThread *asyncThread;
@property (nonatomic) unsigned long long asyncThreadStatus;
@property (retain, nonatomic) NSMutableArray *audioSampleDataQueue;
@property (retain, nonatomic) NSLock *audioSampleDataQueueLock;
@property (nonatomic) long long maxQueueCount;
@property (nonatomic) BOOL encodeUseFenceRender;
@property (weak, nonatomic) id<VEProcessSampleDelegate> downstream;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long curVideoStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *route;

- (void)p_releaseSampleDataQueue:(id)a0;
- (void)dequeueSampleBufFunc;
- (BOOL)processSampleData:(id)a0;
- (id)requstSampleData:(unsigned long long)a0;
- (void)startThread;
- (void)initBufferQueue;
- (void)becomeActive;
- (BOOL)setConfig:(id)a0;
- (void).cxx_destruct;
- (void)enterBackground;
- (void)resignActive;
- (id)init;
- (void)finish;
- (void)enterForeground;
- (void)dealloc;
- (void)stopThread;
- (void)memoryWarning;
- (void)p_lock;
- (void)p_unlock;

@end
