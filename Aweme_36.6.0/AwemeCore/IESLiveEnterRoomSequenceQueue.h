@class NSOperationQueue;

@interface IESLiveEnterRoomSequenceQueue : NSObject

@property (nonatomic) long long suspendCount;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL rooting;

- (void)executeSequenceTask:(id /* block */)a0;
- (void)resumeQueue;
- (void).cxx_destruct;
- (id)init;
- (void)suspendQueue;
- (void)cancelAll;

@end
