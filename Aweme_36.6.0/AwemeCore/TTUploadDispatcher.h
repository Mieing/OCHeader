@class TTUploadQueue, NSMutableDictionary;

@interface TTUploadDispatcher : NSObject

@property (retain) TTUploadQueue *queueHigh;
@property (retain) TTUploadQueue *queueMid;
@property (retain) TTUploadQueue *queueLow;
@property (retain) NSMutableDictionary *uploadingDic;
@property (retain) NSMutableDictionary *allTaskDic;
@property char uploadingTaskMax;

- (BOOL)setDownlodingTaskCountMax:(char)a0;
- (void)runSameResultBlockAndRemove:(id)a0;
- (BOOL)isTaskExist:(id)a0;
- (BOOL)mergeSameRequestResultBlock:(id)a0;
- (BOOL)deleteTaskToAllTaskDic:(id)a0;
- (BOOL)isTaskWaitInQueue:(id)a0;
- (unsigned long long)getAllTaskCount;
- (void)deleteTask:(id)a0;
- (char)getDownlodingTaskCountMax;
- (unsigned long long)getQueueWaitTaskCount;
- (BOOL)deleteTaskUploadingDic:(id)a0;
- (BOOL)findDTaskUploadingDic:(id)a0;
- (BOOL)isUploadingDicFull;
- (BOOL)addDTaskToUploadingDic:(id)a0;
- (BOOL)isResourceUploading:(id)a0;
- (void)cancelTask:(id)a0;
- (BOOL)enqueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dequeue;
- (void)queryTask:(id)a0;

@end
