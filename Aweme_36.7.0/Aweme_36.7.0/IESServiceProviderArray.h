@class NSArray, NSString;
@protocol IESServiceRegister;

@interface IESServiceProviderArray : NSObject <IESServiceProvider, IESServiceRegister>

@property (retain, nonatomic) NSArray *array;
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
- (id)initWithServiceProviders:(id)a0;
- (id)firstRegister;
- (void).cxx_destruct;
- (void)addChild:(id)a0;

@end
