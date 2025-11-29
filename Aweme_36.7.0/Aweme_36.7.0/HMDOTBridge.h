@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDOTBridge : NSObject

@property BOOL enableBinding;
@property (retain, nonatomic) NSMutableDictionary *cachedTraces;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQeueue;

+ (id)sharedInstance;

- (void)enableTraceBinding:(BOOL)a0;
- (void)registerTrace:(id)a0 forTraceID:(id)a1;
- (void)removeTraceID:(id)a0;
- (id)traceByTraceID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
