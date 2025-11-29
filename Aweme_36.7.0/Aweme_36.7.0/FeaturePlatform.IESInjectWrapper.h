@protocol IESServiceRegister;

@interface FeaturePlatform.IESInjectWrapper : NSObject <IESServiceRegister, IESServiceProvider> {
    void /* unknown type, empty encoding */ wrapped;
}

@property (nonatomic, readonly) id<IESServiceRegister> parent;

- (void)registIdentifiers:(id)a0 scope:(long long)a1 provider:(id /* block */)a2;
- (void)registIdentifiers:(id)a0 scope:(long long)a1 instance:(id)a2;
- (id)resolveObject:(id)a0;
- (id)provideBlockNeedServiceResponse:(id /* block */)a0 forProtocol:(id)a1;
- (id)tryResolveObject:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
