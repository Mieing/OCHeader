@interface AFDRichAwemeContentVideoControllerFactory : NSObject

+ (id)createRichAwemeVideoController:(BOOL)a0 isSlidesContent:(BOOL)a1 model:(id)a2 videoController:(id)a3 videoContext:(id)a4;
+ (BOOL)feedSlidesDisableAutoPlay;
+ (BOOL)p_isFromSearchDisableAlbumAutoplayScene:(id)a0;
+ (BOOL)p_isFromGeneralSearchAndExperienceSearchScene:(id)a0;
+ (long long)searchAlbumDisableAutoPlay;
+ (void)configInteractionControllerDelegateIfNeededWithRichContent:(id)a0 videoController:(id)a1 model:(id)a2;
+ (void)configVideoControllerWithContext:(id)a0 videoContext:(id)a1;
+ (void)configInteractionControllerDelegateIfNeededWithSlidesContent:(id)a0 videoController:(id)a1 model:(id)a2;

@end
