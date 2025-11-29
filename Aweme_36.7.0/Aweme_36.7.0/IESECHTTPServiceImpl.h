@class NSString;

@interface IESECHTTPServiceImpl : NSObject <IESECHTTPService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)beginRequestWithRequest:(id)a0 complation:(id /* block */)a1 metricsBlock:(id /* block */)a2;
+ (void)p_setAWENetworkRequestThreadQueue:(id)a0 shouldRaisePriority:(BOOL *)a1;
+ (id)requestWithRequest:(id)a0 completion:(id /* block */)a1;
+ (long long)fetchCurrentNetworkEffectLevel;


@end
