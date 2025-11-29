@class AWEDCFeedPageContext;

@interface AWESearchHomeDCFeedVideoPreloadController : NSObject

@property (weak, nonatomic) AWEDCFeedPageContext *feedContext;

- (BOOL)enablePreloadVideo;
- (double)preloadDelayTime;
- (void)preloadAweme:(id)a0;
- (void)preloadCoverImageWithAweme:(id)a0;
- (void)cancelPreloadVideo;
- (void)preloadAwemeVideoContent:(id)a0;
- (id)preloadCustomHeader:(id)a0;
- (void)startPrefetchVideo:(id)a0 tag:(id)a1 customHeaderDic:(id)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (id)getBussinessID;
- (BOOL)enablePreloadCoverAndAvatar;
- (void)preloadAvatarWithAweme:(id)a0;
- (void)preloadInsImage:(id)a0;
- (void)preloadCoverImageWithCoverUrlLists:(id)a0;
- (void)preloadAvatarWithAvatarUrlLists:(id)a0;
- (BOOL)enablePreloadInsImage;
- (BOOL)enablePreloadSecondInsImage;
- (void)preloadCoverAndAvatarWithAwemeArray:(id)a0;
- (void)preloadVideoModels:(id)a0;
- (void)preloadCoverAndAvatarImageBeforeTransformModelWithDataArray:(id)a0;
- (void)preloadImageWithImageUrlsArray:(id)a0;
- (void).cxx_destruct;

@end
