@class NSString;

@interface AWEAdEggAnimationService : HTSService <AWEAdEggAnimationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)downloadResourceWithEggModelProtocol:(id)a0 completionBlock:(id /* block */)a1;

- (id)showEggOnView:(id)a0 aweme:(id)a1 eggModelProtocol:(id)a2 eggFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 closeButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 maxWaitToShowTime:(double)a5 completionBlock:(id /* block */)a6 clickImageBlock:(id /* block */)a7 dismissBlock:(id /* block */)a8 canViewBeClicked:(BOOL)a9;
- (id)showEggOnView:(id)a0 aweme:(id)a1 eggModelProtocol:(id)a2 eggFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 maxWaitToShowTime:(double)a4 completionBlock:(id /* block */)a5 clickImageBlock:(id /* block */)a6 dismissBlock:(id /* block */)a7 canViewBeClicked:(BOOL)a8;

@end
