@class NSObject;
@protocol OS_dispatch_semaphore;

@interface BDUGLocServiceFetchTask : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *consumeSem;
@property BOOL locServiceEnabled;

- (void)syncFetchStatusWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;

@end
