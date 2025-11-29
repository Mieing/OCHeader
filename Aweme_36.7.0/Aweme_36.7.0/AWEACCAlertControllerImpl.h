@class NSString;

@interface AWEACCAlertControllerImpl : NSObject <ACCAlertControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAlertWithTitle:(id)a0 message:(id)a1 preferredStyle:(long long)a2 cancelButtonTitle:(id)a3 destructiveButtonTitle:(id)a4 otherButtonTitles:(id)a5 tapBlock:(id /* block */)a6;
- (void)showAlertController:(id)a0;

@end
