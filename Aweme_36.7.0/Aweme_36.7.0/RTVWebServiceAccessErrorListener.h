@class NSString;
@protocol RxInjector;

@interface RTVWebServiceAccessErrorListener : NSObject <RxWebServiceAccessErrorListenerProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)webServiceAccessWithError:(id)a0 errorMessage:(id)a1;
- (void)_makeCrash;
- (void)_makeCrashWithTip:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;

@end
