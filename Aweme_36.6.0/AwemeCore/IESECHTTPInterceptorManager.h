@class NSSet, NSMutableArray;

@interface IESECHTTPInterceptorManager : NSObject

@property (retain, nonatomic) NSMutableArray *registeredInterceptors;
@property (retain, nonatomic) Class globalInterceptor;
@property (retain, nonatomic) NSSet *interceptorBlackList;

+ (void)unregisterInterceptor:(Class)a0;
+ (void)registerInterceptor:(Class)a0 isGlobal:(BOOL)a1;
+ (void)executeInterceptorIfNeedWithRequest:(id)a0 modelClass:(Class)a1;
+ (BOOL)isInterceptorInBlacklist:(Class)a0;
+ (id)getApiPathWithHttpURL:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
