@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveChatChannelAnimationQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) NSMutableArray *queue;

- (id)frontItem;
- (void)enqueue:(id)a0;
- (void)pop;
- (void).cxx_destruct;
- (void)clear;
- (void)removeItem:(id)a0;

@end
