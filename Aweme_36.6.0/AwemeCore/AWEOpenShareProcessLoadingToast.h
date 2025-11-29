@interface AWEOpenShareProcessLoadingToast : NSObject

+ (void)tryInit;
+ (void)showLoadingViewWithProcess:(BOOL)a0 withID:(id)a1;
+ (void)hideLoadingViewAnimated:(BOOL)a0 withID:(id)a1;
+ (void)updateLoadingProcess:(float)a0 withID:(id)a1;

@end
