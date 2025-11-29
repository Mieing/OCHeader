@class NSString;
@protocol IESLLRouterInterceptorDelegate;

@interface IESLLRouterInterceptorDelegateAdapter : NSObject <AWERouterInterceptorDelegate>

@property (weak, nonatomic) id<IESLLRouterInterceptorDelegate> sourceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)interceptorActionBeforeTransferWithURLString:(id)a0 userInfo:(id)a1;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:(id)a0;
- (void).cxx_destruct;

@end
