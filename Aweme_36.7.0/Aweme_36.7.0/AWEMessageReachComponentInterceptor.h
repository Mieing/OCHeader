@class NSString;

@interface AWEMessageReachComponentInterceptor : NSObject <AWEMRComponentInterceptorProtocol, AWEAlertInterceptorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)interceptorActionAfterCanShowCheck:(id)a0 completion:(id /* block */)a1;
- (BOOL)interceptorActionBeforeShowWithBadgeComponentModel:(id)a0 channelID:(id)a1 canShowCallBack:(id /* block */)a2;
- (BOOL)interceptorActionBeforeShowWithBubbleComponentModel:(id)a0 channelID:(id)a1 canShowCallBack:(id /* block */)a2;
- (void)invokeAlertRegisterInterceptorCheckCompletion:(id /* block */)a0 withVerifyResult:(BOOL)a1;
- (BOOL)needInterceptTask:(id)a0;
- (BOOL)interceptorActionBeforeShowWithBaseComponentModel:(id)a0 componentType:(id)a1 channelID:(id)a2 canShowCallBack:(id /* block */)a3;

@end
