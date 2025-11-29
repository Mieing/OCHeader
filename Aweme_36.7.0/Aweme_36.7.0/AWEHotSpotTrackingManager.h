@interface AWEHotSpotTrackingManager : NSObject

+ (id)followAspect;
+ (id)dislikeAspect;
+ (id)videoPlayAspect;
+ (void)modifyParamsDictWithModel:(id)a0 params:(id)a1 context:(id)a2;
+ (void)changeParamsForHotSpotFromSourceParams:(id)a0 model:(id)a1 context:(id)a2;
+ (id)videoPlayTimeAspect;
+ (id)videoPlayFinishAspect;
+ (id)likeAspect;
+ (id)likeCancelAspect;
+ (id)shareVideoAspect;
+ (id)favourateAspect;
+ (id)cancelFavourateAspect;
+ (id)likeCommentAspect;
+ (id)cancelLikeCommentAspect;
+ (id)postCommentAspect;

@end
