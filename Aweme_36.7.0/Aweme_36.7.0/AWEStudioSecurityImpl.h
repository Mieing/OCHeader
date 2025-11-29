@class NSString;

@interface AWEStudioSecurityImpl : NSObject <AWEStudioSecurityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showTwiceVerifyAlertView:(id)a0 cancelBlock:(id /* block */)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3 enterMethod:(id)a4;
- (void)startForScene:(id)a0;
- (void)configTwiceVerify;
- (void)dismissPublishAlertView;
- (void)postAWEVerifyEndWithShowPublishRetryViewNotificationWithObject:(id)a0;

@end
