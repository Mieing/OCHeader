@class NSString, NSMutableArray;

@interface IESLLPOIRouterVerifyService : HTSService <IESLLPOIRouterVerifyService>

@property (retain, nonatomic) NSMutableArray *interceptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)injectBlockExecuteAfterServiceInit:(id /* block */)a0;

- (void)onServiceInit;
- (void)addInterceptor:(id)a0;
- (void)removeInterceptor:(id)a0;
- (void)verifyForKey:(id)a0 params:(id)a1;
- (void)verifyForRouter:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
