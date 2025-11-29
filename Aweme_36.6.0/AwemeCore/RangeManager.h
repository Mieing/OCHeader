@class TTUploadTaskParam, NSLock, NetJob, SliceInfo, NSMutableDictionary, UploadRange, ResponseProtocol, NSObject;
@protocol OS_dispatch_semaphore;

@interface RangeManager : NSObject

@property (retain, nonatomic) TTUploadTaskParam *userParam;
@property (retain, nonatomic) ResponseProtocol *serverResponse;
@property (retain) NSLock *rangeLock;
@property int uploadingRangeCount;
@property int needUploadRangeCountTotal;
@property int uploadCompletedRangeCount;
@property int uploadFailedRangeCount;
@property (retain) NSMutableDictionary *localRangeDic;
@property (retain) UploadRange *needUploadRange;
@property char realSliceCountMax;
@property (retain) NetJob *queryJob;
@property (retain) SliceInfo *querySliceInfo;
@property BOOL isFirstRange;
@property BOOL isCancel;
@property (retain) NSObject<OS_dispatch_semaphore> *retryWaitSem;

- (char)getSliceCountMax:(id)a0;
- (BOOL)makeLocalRangeList:(id)a0;
- (BOOL)updateRangeListWithRetry:(id *)a0;
- (long long)getDynamicSliceInitStepLength;
- (id)splitRange:(id)a0 step:(long long)a1;
- (long long)getLengthMin;
- (BOOL)updateRangeList:(id *)a0;
- (id)getUnfinishedRange:(id *)a0;
- (id)initWithParam:(id)a0 serverResponse:(id)a1;
- (id)getRange:(id *)a0;
- (BOOL)updateRangeStatus:(long long)a0 sliceInfo:(id)a1;
- (BOOL)isUploadCompleted;
- (BOOL)isUploadFailed;
- (BOOL)reset:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;

@end
