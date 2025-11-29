@class NSMutableArray;

@interface BDECRabbiFlyJSWorkerTokenStatus : NSObject

@property (nonatomic) BOOL isResumed;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isLoadSuccess;
@property (retain, nonatomic) NSMutableArray *pendingEventQueue;

- (void).cxx_destruct;
- (id)init;

@end
