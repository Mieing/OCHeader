@class NSString;

@interface AWEShowShrinkTransitionUtil : NSObject <AWEShowShrinkTransitionUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPlayletFullscreenInteractiveShrinkTransitionForSameModel;
- (BOOL)noPauseMagnifyTransitionViewDisappearPushPlayletForInnerEnable;
- (BOOL)isPlayletFullscreenMagnifyTransition;
- (BOOL)noPauseInteractiveShrinkTransitionViewDisappearPushPlayletForInnerEnable;
- (BOOL)isPlayletFullscreenInteractiveShrinkTransitionForShouldUpdateProgressInFeed:(BOOL)a0;
- (BOOL)noPauseMagnifyTransitingPushPlayletEnable;
- (BOOL)noPauseMagnifyTransitionControllerPushPlayletEnable;
- (BOOL)getShouldSyncPlayletVideo;
- (BOOL)noPauseMagnifyTransitionViewDisappearPushPlayletForFeedEnable;
- (id)showPlayletVideoTransitionPauseOpParams;

@end
