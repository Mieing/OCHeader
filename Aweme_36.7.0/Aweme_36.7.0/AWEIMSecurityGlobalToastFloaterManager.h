@class AWEIMSecurityGlobalToastStore;

@interface AWEIMSecurityGlobalToastFloaterManager : NSObject

@property (retain, nonatomic) AWEIMSecurityGlobalToastStore *store;

- (void)tryShowFloatSafetyTipsViewOnView:(id)a0 viewController:(id)a1 onAddTipsView:(id /* block */)a2 floatViewOnDismiss:(id /* block */)a3;
- (void)reportSecurityGlobalToastPama:(id)a0 toastStatus:(unsigned long long)a1 content:(id)a2;
- (void)updateFloaterData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
