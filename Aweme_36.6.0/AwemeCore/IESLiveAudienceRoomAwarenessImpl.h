@class NSString;

@interface IESLiveAudienceRoomAwarenessImpl : NSObject <IESLiveAudienceRoomAwareness>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disableFullscreenPopTransitionFor:(id)a0;
- (void)enableFullscreenPopTransitionFor:(id)a0;
- (void)enableFullscreenPopTransitionFor:(id)a0 panBegin:(id /* block */)a1 restoreBlock:(id /* block */)a2 endBlock:(id /* block */)a3;
- (void)enableFullscreenPopTransitionFor:(id)a0 shouldStartBlock:(id /* block */)a1 panBegin:(id /* block */)a2 restoreBlock:(id /* block */)a3 endBlock:(id /* block */)a4;
- (void)audienceRoomAwareness:(id)a0;
- (void)enableFullscreenPopTransitionFor:(id)a0 shouldStartBlock:(id /* block */)a1 panBegin:(id /* block */)a2 restoreBlock:(id /* block */)a3 shouldComplete:(id /* block */)a4 endBlock:(id /* block */)a5;
- (void)hideNavigationBarFor:(id)a0;
- (void)setStatusBarStyleFor:(id)a0 style:(long long)a1;
- (void)forbidInteractivePopGestureRecognizerFor:(id)a0;

@end
