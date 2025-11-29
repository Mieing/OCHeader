@class NSString;

@interface AWELoginDetainAlert : NSObject <DUXAlertDialogDelegate>

@property (copy, nonatomic) id /* block */ alertCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alertDialogDidClickMaskArea:(id)a0;
- (void)showWithCallBack:(id /* block */)a0;
- (void).cxx_destruct;

@end
