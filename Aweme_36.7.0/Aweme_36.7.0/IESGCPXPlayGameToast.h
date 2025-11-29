@interface IESGCPXPlayGameToast : NSObject

+ (void)showToast:(id)a0 inView:(id)a1;
+ (void)showToast:(id)a0 actionText:(id)a1 clickAction:(id /* block */)a2 closeAction:(id /* block */)a3;
+ (void)showToast:(id)a0 actionText:(id)a1 duration:(double)a2 clickAction:(id /* block */)a3 closeAction:(id /* block */)a4;
+ (void)showToast:(id)a0;
+ (void)showToast:(id)a0 duration:(double)a1;
+ (id)sharedInstance;

@end
