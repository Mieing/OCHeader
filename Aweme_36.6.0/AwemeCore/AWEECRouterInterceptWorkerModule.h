@class NSString, NSDictionary;
@protocol AWEECRouterInterceptDelegate;

@interface AWEECRouterInterceptWorkerModule : NSObject <JSModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (weak, nonatomic) id<AWEECRouterInterceptDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithParam:(id)a0;
- (void)openSchema:(id)a0;
- (void)fetch:(id)a0 params:(id)a1 method:(id)a2 callback:(id /* block */)a3 data:(id)a4 headers:(id)a5;
- (void)sendLogV3:(id)a0 params:(id)a1;
- (id)handleSchema:(id)a0;
- (id)createJumpSourceBtmToken:(id)a0 bcm:(id)a1;
- (void).cxx_destruct;

@end
