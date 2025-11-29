@class NSString;

@interface RxInjectorInstanceProvider : NSObject <RxInjectorProvider>

@property (readonly, nonatomic) id instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithInstance:(id)a0;

- (id)provide:(id)a0 injector:(id)a1;
- (void).cxx_destruct;
- (id)initWithInstance:(id)a0;

@end
