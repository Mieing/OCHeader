@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CepFixedQueue : NSObject

@property (retain, nonatomic) NSMutableDictionary *dispatchQueues;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *defaultQueue;
@property unsigned long long size;

+ (id)sharedInstance;

- (id)getDispatchQueue:(unsigned long long)a0;
- (void)setupWithSize:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
