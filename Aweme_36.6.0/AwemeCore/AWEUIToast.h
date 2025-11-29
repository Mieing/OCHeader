@interface AWEUIToast : NSObject

+ (void)showToast:(id)a0 withStyle:(unsigned long long)a1;
+ (void)showToast:(id)a0 onView:(id)a1 withStyle:(unsigned long long)a2;
+ (void)showToast:(id)a0 onViewController:(id)a1 withStyle:(unsigned long long)a2;
+ (void)showToast:(id)a0 onView:(id)a1 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withStyle:(unsigned long long)a3;
+ (void)toastTimeUp:(id)a0;
+ (void)showToast:(id)a0 withImage:(id)a1;
+ (void)dismissToast;
+ (void)showToast:(id)a0;

@end
