@class NSString, NSDictionary;

@interface IESECPuzzleOrderPrefetchHelper : NSObject <PuzzleKitViewLifeCycleProtocol> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSDictionary *data;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) double networkSendTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startFetchWithConfig:(id)a0 routerParam:(id)a1 megaObject:(id)a2;
- (id)_handleParamWithConfigDict:(id)a0 routerParam:(id)a1 entranceInfo:(id)a2 cjInfo:(id)a3;
- (void)_requestOrderDataWithParams:(id)a0 completion:(id /* block */)a1;
- (id)_handleParamWithConfigItem:(id)a0 routerParam:(id)a1 entranceInfo:(id)a2 cjInfo:(id)a3;
- (id)getKey:(id)a0 fromDict:(id)a1 forType:(id)a2;
- (id)initWithRequestID:(id)a0;
- (void).cxx_destruct;
- (void)handle:(id /* block */)a0;

@end
