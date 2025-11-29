@class AWEUIAlertView, AWEUITextLoadingView, NSString;

@interface AWECnryphoctVerify : HTSService <AWECnryphoctVerify>

@property (retain, nonatomic) AWEUIAlertView *publishSecondVerifyAlertView;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissLoading;
- (void)showTwiceVerifyAlertView:(id)a0 cancelBlock:(id /* block */)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3 enterMethod:(id)a4;
- (void)showTwiceVerifyAlertView:(id)a0 cancelBlock:(id /* block */)a1 goToVerifyBlock:(id /* block */)a2 enterMethod:(id)a3;
- (void)showNewTwiceVerifyAlertView:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2 enterMethod:(id)a3;
- (void)dismissPublishAlertView;
- (void)showToastWithTitle:(id)a0;
- (void)showLoadingWithTitle:(id)a0;
- (void).cxx_destruct;

@end
