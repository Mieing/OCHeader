@class NSArray, NSString, NSHashTable;

@interface BDXWebViewLifeCycleDispatcher : NSObject <WKNavigationDelegate>

@property (retain, nonatomic) NSHashTable *innerLifecycleClients;
@property (readonly, nonatomic) NSArray *lifecycleClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addLifecycleClient:(id)a0;
- (void)removeLifecycleClient:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dummyMethod;
- (void)forwardInvocation:(id)a0;

@end
