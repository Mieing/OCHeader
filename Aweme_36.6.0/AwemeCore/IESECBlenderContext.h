@class NSString, NSDictionary, NSMutableDictionary;

@interface IESECBlenderContext : IESECContext <IESECBlenderContext> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableDictionary *_protocolServiceClassMap;
}

@property (retain, nonatomic) NSString *blenderInstanceId;
@property (retain, nonatomic) NSDictionary *apiConfifg;
@property (retain, nonatomic) NSDictionary *queryParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)serviceForProtocol:(id)a0;
- (id)createServiceProxyForProtocol:(id)a0;
- (void)registerServiceForProtocol:(Class)a0 forProtocol:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
