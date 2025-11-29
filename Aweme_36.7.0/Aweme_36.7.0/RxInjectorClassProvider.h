@class NSString;

@interface RxInjectorClassProvider : NSObject <RxInjectorProvider>

@property (readonly, nonatomic) Class class;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithClass:(Class)a0;

- (id)provide:(id)a0 injector:(id)a1;
- (void).cxx_destruct;
- (id)initWithClass:(Class)a0;

@end
