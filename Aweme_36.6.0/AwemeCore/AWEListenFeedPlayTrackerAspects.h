@interface AWEListenFeedPlayTrackerAspects : NSObject

+ (id)videoPlayAspect;
+ (id)videoPlayFinishAspect;
+ (id)likeAspect;
+ (id)likeCancelAspect;
+ (id)shareVideoAspect;
+ (id)playTimeAspect;
+ (id)favouriteVideoAspect;
+ (id)videoPlayPauseAspect;
+ (id)clickCommentButtonAspect;
+ (id)p_listenRankFromTrackerContext:(id)a0;
+ (id)p_listenRankFromTrackerContext:(id)a0 isVideoPlay:(BOOL)a1;
+ (void)p_addListenEnterDiffFromTrackerContext:(id)a0 toParams:(id)a1;
+ (id)videoPlayFailedAspect;

@end
