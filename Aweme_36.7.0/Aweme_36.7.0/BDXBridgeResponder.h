@interface BDXBridgeResponder : NSObject

+ (void)reloadContainer:(id)a0;
+ (void)setEnableToFull:(id)a0 enable:(BOOL)a1;
+ (void)setEnableToHalf:(id)a0 enable:(BOOL)a1;
+ (void)disableFullScreenPop:(id)a0 disable:(BOOL)a1;
+ (void)closeContainerIDs:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (void)closeContainer:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (id)viewControllerForResponder:(id)a0;
+ (BOOL)isInHirForViewController:(id)a0;
+ (void)allowCloseByGesture:(id)a0 enable:(BOOL)a1;

@end
