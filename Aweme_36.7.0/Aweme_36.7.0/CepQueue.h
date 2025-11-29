@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CepQueue : NSObject

@property (retain, nonatomic) NSMutableDictionary *dispatchQueues;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *globalQueue;

+ (id)sharedInstance;

- (id)getDispatchQueue:(id)a0;
- (id)getGlobalQueue;
- (void).cxx_destruct;
- (id)init;

@end
