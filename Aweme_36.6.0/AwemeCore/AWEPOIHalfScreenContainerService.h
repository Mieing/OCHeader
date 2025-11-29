@interface AWEPOIHalfScreenContainerService : NSObject

+ (id)showHalfScreenWithParams:(id)a0 contentController:(id)a1 completion:(id /* block */)a2 shouldClose:(id /* block */)a3 close:(id /* block */)a4;
+ (id)buildHalfScreenContainerParametersWithParams:(id)a0;
+ (id)showHalfScreenWithHalfScreenContainerParameters:(id)a0 contentController:(id)a1 completion:(id /* block */)a2 shouldClose:(id /* block */)a3 close:(id /* block */)a4;
+ (id)p_showHalfScreenWithParams:(id)a0 contentController:(id)a1 completion:(id /* block */)a2 shouldClose:(id /* block */)a3 close:(id /* block */)a4;
+ (void)p_showLiveFloatOnTopIfNeeded:(id)a0 containerViewController:(id)a1 fromViewController:(id)a2;

@end
