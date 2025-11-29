@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WXPLiteAppModuleCallbackService : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventCallbackMap;
@property (nonatomic) long long idCounter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;

+ (id)sharedInstance;

- (id)init;
- (long long)registerEventCallback:(id)a0 callback:(id)a1;
- (void)unregisterEventCallback:(id)a0 callbackId:(long long)a1;
- (void)handleLiteAppModuleResponse:(id)a0 event:(id)a1 data:(id)a2;
- (void).cxx_destruct;

@end
