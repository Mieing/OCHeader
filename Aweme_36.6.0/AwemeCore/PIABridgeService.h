@class NSString, PIABiMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface PIABridgeService : NSObject <PIABridgeService>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *asyncAPIQueue;
@property (retain, nonatomic) PIABiMapTable *APIInfoList;
@property (retain, nonatomic) PIABiMapTable *APIClassList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (void)invokeAPI:(id)a0 params:(id)a1 instance:(id)a2 executeResult:(id /* block */)a3;
- (void)registerAPIInfo:(id)a0 instance:(id)a1;
- (void)registerInstanceAPIInfo:(id)a0 APIClass:(Class)a1;
- (BOOL)hasRegisterInstance:(id)a0;
- (void)executeWithIsMainThread:(BOOL)a0 isSynchronous:(BOOL)a1 block:(id /* block */)a2;
- (void).cxx_destruct;

@end
