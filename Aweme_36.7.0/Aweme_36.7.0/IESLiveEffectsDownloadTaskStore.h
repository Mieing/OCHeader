@class IESLiveEffectsDownloadQueue, NSMutableArray, NSMutableDictionary;

@interface IESLiveEffectsDownloadTaskStore : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _concurrentCountLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _taskLock;
}

@property (retain, nonatomic) IESLiveEffectsDownloadQueue *queue;
@property (retain, nonatomic) NSMutableArray *taskArray;
@property (retain, nonatomic) NSMutableDictionary *idToTaskSetMap;
@property (nonatomic) long long conCurrentCount;
@property (nonatomic) long long maxConCurrentCount;
@property (copy, nonatomic) id /* block */ nodeDequeueBlock;

- (void)startQueue;
- (void)processTask:(id)a0;
- (void)cancelDownloadTaskWithPriority:(unsigned long long)a0;
- (void)notifyLoopNextWithModel:(id)a0 status:(unsigned long long)a1;
- (void)monitorDownloadTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startTask:(id)a0;

@end
