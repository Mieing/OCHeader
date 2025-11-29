@class NSString;

@interface AWEToastProxy : HTSService <AWEToastProxyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setToastStyle:(unsigned long long)a0;
+ (void)_aweLazyRegisterLoad_ToastCompatiable;

- (void)onServiceInit;
- (void)show:(id)a0 onView:(id)a1;
- (void)showError:(id)a0 onView:(id)a1;
- (void)showSuccess:(id)a0 onView:(id)a1;
- (void)show:(id)a0;
- (void)showError:(id)a0;
- (void)showSuccess:(id)a0;

@end
