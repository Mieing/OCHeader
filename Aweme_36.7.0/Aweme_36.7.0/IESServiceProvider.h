@class NSString, IESContainer;

@interface IESServiceProvider : NSObject <IESServiceProvider> {
    IESContainer *_container;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resolveObject:(id)a0;
- (id)provideBlockNeedServiceResponse:(id /* block */)a0 forProtocol:(id)a1;
- (id)tryResolveObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;

@end
