@class NetJob, NSObject, SliceInfo;
@protocol OS_dispatch_source;

@interface TTUploadSliceBackgroundTaskImpl : TTUploadSliceTaskImpl

@property (retain) SliceInfo *info;
@property (copy) id /* block */ onJobCompletedBlock;
@property (copy) id /* block */ onBgTaskEndBlock;
@property (retain) NetJob *queryJob;
@property (retain) NetJob *backgroundUploadJob;
@property long long cancelType;
@property (retain) NSObject<OS_dispatch_source> *bgRetryTimer;
@property int bgRemainRetryTimes;

- (int)decreaseRetryTimes;
- (id)initWithUploadInfo:(id)a0 onCompletedBlock:(id /* block */)a1 onProgressBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)cancel:(long long)a0;
- (void)start;
- (void)dealloc;

@end
