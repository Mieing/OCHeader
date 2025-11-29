@class NSString;

@interface AWEACCAlertImpl : NSObject <ACCAlertProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAlertWithTitle:(id)a0 description:(id)a1 image:(id)a2 actionButtonTitle:(id)a3 cancelButtonTitle:(id)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (void)showAlertController:(id)a0 animated:(BOOL)a1;
- (id)alertActionWithTitle:(id)a0 style:(long long)a1 font:(id)a2 handler:(id /* block */)a3;
- (void)showAlertController:(id)a0 fromView:(id)a1;
- (id)alertView;
- (id)alertActionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

@end
