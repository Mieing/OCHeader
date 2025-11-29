@class NSObject;
@protocol OS_dispatch_queue;

@interface TTTrackerUploadExecutor : NSObject {
    NSObject<OS_dispatch_queue> *executeQueue;
}

@property BOOL packetIsFull;
@property BOOL isPacking;
@property (nonatomic) BOOL started;
@property (copy, nonatomic) id /* block */ onRequest;
@property (nonatomic) BOOL executed;

+ (id)sharedExecutor;

- (id)executeQueue;
- (void)trigger:(unsigned long long)a0 options:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)sendEventRequestIfNeed:(unsigned long long)a0 packetIndex:(unsigned long long)a1;
- (BOOL)allowRequest:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
