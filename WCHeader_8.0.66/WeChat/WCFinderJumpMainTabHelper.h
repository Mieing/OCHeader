@interface WCFinderJumpMainTabHelper : NSObject

+ (void)jumpMainMsgListTabFromVC:(id)a0 contact:(id)a1 setupsnaptureVCNav:(id /* block */)a2 complete:(id /* block */)a3;
+ (void)pushVCThenJumpToFindTab:(id)a0 currentNav:(id)a1 complete:(id /* block */)a2;
+ (void)moveToRootViewControllerForIndex:(long long)a0 completion:(id /* block */)a1;

@end
