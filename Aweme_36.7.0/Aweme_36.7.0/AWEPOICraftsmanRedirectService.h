@class NSString;

@interface AWEPOICraftsmanRedirectService : NSObject <AWERouterInterceptorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)interceptorActionBeforeTransferWithURLString:(id)a0 userInfo:(id)a1;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:(id)a0;
- (BOOL)needRedirectTransitionInfo:(id)a0;
- (void)redirectRouterWithTransitionInfo:(id)a0;
- (id)getUrlWithSkipRedirectTag:(id)a0;
- (void)openUrlWithSkipRedirectTag:(id)a0;

@end
