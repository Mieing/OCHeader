@interface AWEVoipToast : NSObject <RTVVoipToastInterface, RTVToastInterface>

- (void)showMessage:(id)a0 withStyle:(long long)a1;
- (void)showMessage:(id)a0 style:(long long)a1;
- (id)showMessageForever:(id)a0 onView:(id)a1;
- (void)hiddenToast:(id)a0;
- (long long)__voipToastStyleWithRTVToastStyle:(long long)a0;
- (void)showMessage:(id)a0;

@end
