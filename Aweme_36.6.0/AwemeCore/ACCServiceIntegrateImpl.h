@class HTSServiceContainer, IESContainer, NSString;
@protocol IESServiceRegister;

@interface ACCServiceIntegrateImpl : NSObject <IESServiceProvider, IESServiceRegister, ACCServiceRegistRecipe, ACCServiceProvideRecipe>

@property (retain, nonatomic) ACCServiceIntegrateImpl *parentAssemblerImpl;
@property (retain, nonatomic) IESContainer *iesServiceContainer;
@property (retain, nonatomic) HTSServiceContainer *htsServiceContainer;
@property (nonatomic) unsigned long long abChooseStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<IESServiceRegister> parent;

- (id)resolveObject:(id)a0;
- (id)provideBlockNeedServiceResponse:(id /* block */)a0 forProtocol:(id)a1;
- (id)tryResolveObject:(id)a0;
- (void)registIdentifiers:(id)a0 scope:(long long)a1 provider:(id /* block */)a2;
- (void)registIdentifiers:(id)a0 scope:(long long)a1 instance:(id)a2;
- (void)registerService:(id /* block */)a0 to:(id)a1;
- (id)providerService:(id)a0;
- (id)initContainerWithParent:(id)a0;
- (void)registerService:(id /* block */)a0 toClassOrProtocol:(id)a1 withScope:(long long)a2;
- (long long)p_coverHTSScopeType2IESType:(long long)a0;
- (id)iesResolveObject:(id)a0;
- (void)registerServiceArray:(id /* block */)a0 toClassOrProtocolArray:(id)a1 withScope:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
