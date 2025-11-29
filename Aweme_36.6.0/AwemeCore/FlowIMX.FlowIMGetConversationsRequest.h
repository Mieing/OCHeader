@class OS_dispatch_queue;

@interface FlowIMX.FlowIMGetConversationsRequest : NSObject

@property (nonatomic, readonly) BOOL enablePaging;
@property (nonatomic, readonly) long long firstLimitSize;
@property (nonatomic, readonly) long long pagingLimitSize;
@property (nonatomic, retain) OS_dispatch_queue *processThread;
@property (nonatomic, retain) OS_dispatch_queue *callbackThread;

- (id)initWithEnablePaging:(BOOL)a0 firstLimitSize:(long long)a1 pagingLimitSize:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
