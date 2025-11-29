@class NSString;

@interface IESLLRouterInterceptorBizService : HTSService <IESLLRouterInterceptorBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerInterceptorDelegate:(id)a0 interceptorKey:(id)a1;
+ (void)unregisterInterceptorDelegate:(id)a0 interceptorKey:(id)a1;


@end
