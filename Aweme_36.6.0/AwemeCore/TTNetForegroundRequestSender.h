@class NSLock, NSMutableArray;

@interface TTNetForegroundRequestSender : NSObject

@property (retain) NSMutableArray *waitingQueue;
@property (retain) NSLock *queueLock;

+ (id)shareInstance;

- (void)releaseAllTasks;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
