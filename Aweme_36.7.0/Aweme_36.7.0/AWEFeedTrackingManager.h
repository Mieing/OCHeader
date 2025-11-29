@interface AWEFeedTrackingManager : NSObject

+ (id)followAspect;
+ (id)dislikeAspect;
+ (id)videoPlayAspect;
+ (id)videoPlayFinishAspect;
+ (id)likeAspect;
+ (id)likeCancelAspect;
+ (id)shareVideoAspect;
+ (id)postCommentAspect;
+ (id)playTimeAspect;
+ (id)shareVideoSuccessAspect;
+ (id)favouriteVideoAspect;
+ (id)enterPersonalDetailAspect;
+ (id)getHomepageHotParamsWithAwemeModel:(id)a0;
+ (id)getShootWayWithModel:(id)a0;
+ (id)getSearchMiddlePageParamsWithAwemeModel:(id)a0;
+ (id)shootWayAllowList;
+ (id)postCommentFinishAspect;
+ (id)cancelFavouriteVideoAspect;
+ (id)followCancelAspect;
+ (id)clickCommentButtonAspect;
+ (id)clickMoreButtonAspect;
+ (id)downloadAspect;

@end
