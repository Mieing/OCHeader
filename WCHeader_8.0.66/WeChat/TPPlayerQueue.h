@class NSObject;
@protocol OS_dispatch_queue;

@interface TPPlayerQueue : NSObject {
    void *_playingQueueKey;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *playingQueue;

- (id)initWithPlayingQueue:(id)a0;
- (id)initWithPlayingQueue:(id)a0 queueName:(id)a1;
- (id)init;
- (void *)playingQueueKey;
- (void).cxx_destruct;

@end
