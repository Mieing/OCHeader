@class NSString, RxInjectorInitializer;

@interface RxInjectorInitializerProvider : NSObject <RxInjectorProvider>

@property (readonly, nonatomic) RxInjectorInitializer *initializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithInitializer:(id)a0;

- (id)provide:(id)a0 injector:(id)a1;
- (void)raiseNilValueExceptionForKey:(id)a0;
- (void)raiseTooManyArgsException;
- (void).cxx_destruct;
- (id)initWithInitializer:(id)a0;

@end
