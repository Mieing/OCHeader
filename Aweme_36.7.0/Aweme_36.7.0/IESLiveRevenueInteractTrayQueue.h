@class NSObject, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IESLiveRevenueInteractTrayQueue : NSObject

@property (retain, nonatomic) NSMutableArray *nodeArray;
@property (retain, nonatomic) NSMutableDictionary *giftToNodeMapping;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)dequeueNodeAtIndex:(long long)a0;
- (void)enqueue:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)insertNode:(id)a0 atIndex:(long long)a1;
- (void)pop:(id /* block */)a0;

@end
