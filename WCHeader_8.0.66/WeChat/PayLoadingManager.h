@interface PayLoadingManager : NSObject

+ (void)showPayLoading:(BOOL)a0;
+ (void)showPayLoading:(BOOL)a0 style:(long long)a1 option:(id)a2;
+ (BOOL)isShowing;
+ (void)forceHide;

@end
