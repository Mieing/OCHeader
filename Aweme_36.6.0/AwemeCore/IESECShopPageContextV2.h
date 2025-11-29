@class NSString, NSMutableArray, NSMutableDictionary;
@protocol IESECShopLayoutManager, IESECShopControllerManagerV2;

@interface IESECShopPageContextV2 : IESECContext <IESECShopPageContextV2> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableArray *_serviceArray;
    NSMutableDictionary *_serviceClassMap;
}

@property (weak, nonatomic) id<IESECShopLayoutManager> layoutManager;
@property (weak, nonatomic) id<IESECShopControllerManagerV2> controllerManagerV2;
@property (nonatomic) BOOL enableServiceValidation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)serviceClassForProtocol:(id)a0;
- (void)retainService:(id)a0;
- (id)serviceForProtocol:(id)a0;
- (id)createServiceProxyForProtocol:(id)a0;
- (void)registerService:(id)a0 toProtocol:(id)a1;
- (void)registerServiceClass:(Class)a0 forProtocol:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
