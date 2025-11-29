@class NSString;

@interface LMTRouterInterceptor : NSObject <AWERouterInterceptorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInterceptor;

- (long long)getAppVersion;
- (BOOL)interceptorActionBeforeTransferWithURLString:(id)a0 userInfo:(id)a1;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:(id)a0;
- (BOOL)isBulletHost:(id)a0;
- (id)init;

@end
