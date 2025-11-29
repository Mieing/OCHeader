@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveObjectReusePool : NSObject

@property (retain, nonatomic) NSMutableDictionary *reusePool;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *readWriteQueue;

+ (id)sharedInstance;

- (void)clearReusePool;
- (void)enqueueReusableObject:(id)a0 withContext:(id)a1;
- (id)dequeueReusableObjectWithReuseContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
