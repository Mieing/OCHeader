@class NSObject;
@protocol OS_dispatch_semaphore;

@interface BDUGLocationStatusFetchTask : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *consumeSem;
@property int status;

- (void)syncFetchStatusWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;

@end
