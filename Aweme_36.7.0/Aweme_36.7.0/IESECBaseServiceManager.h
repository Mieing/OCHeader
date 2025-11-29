@class NSMutableDictionary, NSString, IESECContext, NSMutableArray;
@protocol IESECContainerProtocol, IESECServiceProtocol;

@interface IESECBaseServiceManager : NSObject <IESECBaseServiceDIProtocol>

@property (retain, nonatomic) NSMutableArray<IESECServiceProtocol> *serviceInstanceArray;
@property (retain, nonatomic) NSMutableDictionary *cacheDict;
@property (weak, nonatomic) id<IESECContainerProtocol> container;
@property (weak, nonatomic) IESECContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)protocolCacheEnabled;
+ (void)setProtocolCacheEnabled:(BOOL)a0;

- (id)classNameArray;
- (id)serviceArrayBySelector:(SEL)a0;
- (id)serviceByClass:(Class)a0;
- (void)loadServicesWithContainer:(id)a0 withContext:(id)a1;
- (id)serviceByProtocol:(id)a0;
- (id)servicesByProtocol:(id)a0;
- (void)addService:(id)a0;
- (void).cxx_destruct;
- (void)removeService:(id)a0;
- (void)removeAllServices;
- (void)forwardInvocation:(id)a0;
- (id)serviceArray;

@end
