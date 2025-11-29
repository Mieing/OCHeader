@class NSObject;
@protocol IESIMReadStateItemCacheProtocol, OS_dispatch_queue, OS_dispatch_semaphore;

@interface IESIMReadStateCache : NSObject

@property (retain, nonatomic) id<IESIMReadStateItemCacheProtocol> memoryCache;
@property (retain, nonatomic) id<IESIMReadStateItemCacheProtocol> diskCache;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *createSemaphore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

- (id)uncachedIdentifiersInSet:(id)a0;
- (id)unsafe_readReceiptWithIdentifier:(id)a0;
- (id)updateReceiptModels:(id)a0;
- (id)createReadReceiptWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;

@end
