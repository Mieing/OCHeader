@class NSObject, NSMapTable, NSRecursiveLock;
@protocol OS_dispatch_queue;

@interface BDPBridgeCenter : NSObject

@property (retain, nonatomic) NSRecursiveLock *APILock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *asyncAPIQueue;
@property (retain, nonatomic) NSMapTable *APIClassList;
@property (retain, nonatomic) NSMapTable *APIInfoList;
@property (retain, nonatomic) NSMapTable *APIHandlerList;

+ (void)clearBridgePluginsAssociatedWithInstance:(id)a0;
+ (id)defaultCenter;

- (void)registerInstanceAPIInfo:(id)a0 APIClass:(Class)a1;
- (void)executeWithIsMainThread:(BOOL)a0 isSynchronous:(BOOL)a1 block:(id /* block */)a2;
- (void)invokeAPI:(id)a0 params:(id)a1 instance:(id)a2 checkBlock:(id /* block */)a3 executeResult:(id /* block */)a4;
- (void)registerContextAPIInfo:(id)a0 instance:(id)a1 APIHandler:(id /* block */)a2;
- (id)apiNameBlackList;
- (id)getInnerSkipApiConfig;
- (BOOL)getEnableAPIGuarder;
- (void)execMixWukongAPI:(id)a0 APIClass:(Class)a1 params:(id)a2 instance:(id)a3 metrics:(id)a4 callback:(id /* block */)a5;
- (void)execAloneWukongAPI:(id)a0 APIClass:(Class)a1 params:(id)a2 instance:(id)a3 metrics:(id)a4 callback:(id /* block */)a5;
- (void)executeWithIsMainThread:(BOOL)a0 isCurrentThread:(BOOL)a1 isSynchronous:(BOOL)a2 block:(id /* block */)a3;
- (void)executePreCheckBlockIfExisted:(id /* block */)a0 APIInfo:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
