@class NSMutableDictionary, NSDictionary, NSMapTable, IESLiveGCDTimer;

@interface IESLiveAioLinkRegisterManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (retain, nonatomic) NSMutableDictionary *nativeServiceDic;
@property (retain, nonatomic) NSMapTable *nativeServiceMap;
@property (retain, nonatomic) NSMapTable *lynxServiceMap;
@property (retain, nonatomic) NSMutableDictionary *nativeGlobalServiceDic;
@property (retain, nonatomic) NSMutableDictionary *lynxServiceDic;
@property (retain, nonatomic) NSMutableDictionary *dynamicServiceDic;
@property (retain, nonatomic) NSDictionary *lynxServiceToProtocol;
@property (retain, nonatomic) NSDictionary *dynamicServiceToProtocol;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) NSDictionary *routerServiceToProtocol;
@property (nonatomic) BOOL shouldClear;

+ (id)shareInstace;

- (BOOL)isInTestChannel;
- (void)setDynamicCenterVersion:(id)a0 diContext:(id)a1;
- (void)registerLynxService:(id)a0 view:(id)a1 diContext:(id)a2;
- (void)removeDynamicService:(id)a0;
- (void)clearService:(id)a0;
- (void)registerDynamicService:(id)a0 view:(id)a1 diContext:(id)a2;
- (void)createNativeGlobalService;
- (void)createLynxService:(id)a0 diContext:(id)a1 isRouter:(BOOL)a2;
- (id)nativeGlobalServiceList;
- (id)lynxV1ServiceList;
- (void)registerServiceHandler:(id)a0 toMap:(id)a1 diContext:(id)a2;
- (id)getService:(id)a0 diContext:(id)a1;
- (void)registerNativeService:(id)a0 monitorView:(id)a1 diContext:(id)a2;
- (void)start:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
