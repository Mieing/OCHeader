@class NSObject;
@protocol OS_dispatch_queue;

@interface BDPDeallocCleaner : NSObject

@property (nonatomic) BOOL asyncExec;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *execQueue;
@property (copy, nonatomic) id /* block */ cleanUpBlk;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
