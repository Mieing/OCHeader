@class NSString;

@interface AWEPOISaleChannelVerifyInterceptor : NSObject <AWERouterInterceptorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInterceptor;

- (BOOL)interceptorActionBeforeTransferWithURLString:(id)a0 userInfo:(id)a1;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:(id)a0;
- (BOOL)containerSaleChannelInfo:(id)a0;
- (void)trackErrorInfoWith:(id)a0;
- (void)showErrorAlert:(id)a0;
- (id)init;

@end
