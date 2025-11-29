@class TTQueue, NSMutableDictionary;

@interface TTDownloadDispatcher : NSObject

@property (retain) TTQueue *queueHigh;
@property (retain) TTQueue *queueMid;
@property (retain) TTQueue *queueLow;
@property (retain) NSMutableDictionary *downloadingDic;
@property (retain) NSMutableDictionary *allTaskDic;
@property char downloadingTaskMax;

- (BOOL)setWifiOnlyWithUrlKey:(id)a0 isWifiOnly:(BOOL)a1;
- (BOOL)setDownlodingTaskCountMax:(char)a0;
- (BOOL)deleteTaskDownloadingDic:(id)a0;
- (void)runSameResultBlockAndRemove:(id)a0;
- (BOOL)findDTaskDownloadingDic:(id)a0;
- (BOOL)isTaskExist:(id)a0;
- (BOOL)mergeSameRequestResultBlock:(id)a0;
- (BOOL)isDownloadingDicFull;
- (BOOL)addDTaskToDownloadingDic:(id)a0;
- (BOOL)deleteTaskToAllTaskDic:(id)a0;
- (BOOL)isTaskWaitInQueue:(id)a0;
- (unsigned long long)getAllTaskCount;
- (void)deleteTask:(id)a0;
- (char)getDownlodingTaskCountMax;
- (unsigned long long)getQueueWaitTaskCount;
- (BOOL)isResourceDownloading:(id)a0;
- (void)cancelTask:(id)a0;
- (BOOL)enqueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dequeue;
- (void)queryTask:(id)a0;

@end
