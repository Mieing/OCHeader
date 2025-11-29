@class NSString;

@interface IESECECRouterInterceptHelper : NSObject <IESECRouterIntercept, AWERouterInterceptorDelegate>

@property (copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntercept;
+ (void)registerRouterInterceptBlock:(id /* block */)a0;

- (BOOL)interceptorActionBeforeTransferWithURLString:(id)a0 userInfo:(id)a1;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:(id)a0;
- (void).cxx_destruct;

@end
