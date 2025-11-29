@class NSString;
@protocol NSLocking, RxInjectorProvider;

@interface RxInjectorSingleton : NSObject <RxInjectorScope, RxInjectorProvider>

@property (retain, nonatomic) id<RxInjectorProvider> source;
@property (retain, nonatomic) id instance;
@property (readonly, nonatomic) id<NSLocking> lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scope;

- (id)provide:(id)a0 injector:(id)a1;
- (id)scope:(id)a0;
- (void).cxx_destruct;
- (id)__init;

@end
