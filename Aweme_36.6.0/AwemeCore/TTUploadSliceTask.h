@class NSObject, TTUploadSliceTaskImpl, SliceInfo;
@protocol OS_dispatch_source;

@interface TTUploadSliceTask : NSObject

@property long long sliceHadUploadedLength;
@property (nonatomic) long long sliceTotalLength;
@property (retain) TTUploadSliceTaskImpl *fgTask;
@property (retain) TTUploadSliceTaskImpl *bgTask;
@property (retain) SliceInfo *sliceInfo;
@property BOOL isAtBackground;
@property (copy) id /* block */ onCompletedBlock;
@property (copy) id /* block */ onRuntimeSliceInternalBlock;
@property long long state;
@property unsigned long long backgroundTempTask;
@property BOOL isCancel;
@property (nonatomic) long long originStartRange;
@property (copy) id /* block */ progressBlock;
@property (retain) NSObject<OS_dispatch_source> *backgroundUploadStartTimer;

- (void)applicationEnterBackground;
- (void)endBackgroundUpdateTask;
- (void)stopBGTaskStartTimer;
- (void)doLoop:(long long)a0 serverResponse:(id)a1;
- (void)setBgTaskInvalidFlag;
- (void)setFgTaskInvalidFlag;
- (float)getBgDelayTime;
- (id)initWithUploadInfo:(id)a0 onCompletedBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)start;
- (void)dealloc;
- (void)cancel;

@end
