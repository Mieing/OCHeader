@class NSObject, NSString, BDPLinkListNode;
@protocol OS_dispatch_semaphore;

@interface BDPCircleQueue : NSObject <BDPQueueProtocol>

@property (retain, nonatomic) BDPLinkListNode *queue_head;
@property (retain, nonatomic) BDPLinkListNode *queue_tail;
@property unsigned long long count;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enqueue:(id)a0;
- (void)empty;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)init;
- (id)dequeue;
- (void)dealloc;

@end
