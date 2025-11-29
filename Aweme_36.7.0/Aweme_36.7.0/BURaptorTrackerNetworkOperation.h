@class NSArray;
@protocol BURaptorTrackerNetworkOperationDelegate;

@interface BURaptorTrackerNetworkOperation : NSOperation

@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (copy, nonatomic) NSArray *modelArray;
@property (weak, nonatomic) id<BURaptorTrackerNetworkOperationDelegate> delegate;
@property (nonatomic) long long sendIndex;

- (id)initWithModelArray:(id)a0;
- (void)safeDelegate_operation:(id)a0 sendWithModelArray:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)isConcurrent;
- (void)start;

@end
