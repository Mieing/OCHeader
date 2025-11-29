@class NetJob, NSObject, SliceInfo;
@protocol OS_dispatch_source;

@interface TTUploadSliceForegroundTaskImpl : TTUploadSliceTaskImpl

@property (retain) SliceInfo *info;
@property (copy) id /* block */ onJobCompletedBlock;
@property (retain) NetJob *queryJob;
@property (retain) NetJob *uploadJob;
@property (copy) id /* block */ onFgTaskEndBlock;
@property (copy) id /* block */ onProgressBlock;
@property long long cancelType;
@property (retain) NSObject<OS_dispatch_source> *fgRetryTimer;
@property (nonatomic) int fgRemainRetryTimes;

- (int)decreaseRetryTimes;
- (id)initWithUploadInfo:(id)a0 onCompletedBlock:(id /* block */)a1 onProgressBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)cancel:(long long)a0;
- (void)start;
- (void)dealloc;

@end
