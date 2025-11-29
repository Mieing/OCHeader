@class NSString, UIView;
@protocol ACCTextLoadingViewProtcol;

@interface AWEVideoRouterStoryVideoService : NSObject <AWEStudioStoryVideoService, AWEStudioStoryVideoUtilService>

@property (retain, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableShareVideoAsStory;
- (BOOL)enableShareVideoAsStoryPermissionOptimation;
- (id)startMusicShareToStoryVideoEditWithMusic:(id)a0 extraInfo:(id)a1;
- (id)startVideoEditViewControllerWithBirthdayTemplates:(id)a0 enterFrom:(id)a1;
- (id)createStoryFromProfileWithAvatarImage:(id)a0 originImage:(id)a1 userDisplayName:(id)a2 hashTag:(id)a3 leftEffectId:(id)a4 rightEffectId:(id)a5 unmodifiablePublishParams:(id)a6 referString:(id)a7 enterFrom:(id)a8 directPublish:(BOOL)a9 showLoading:(BOOL)a10 landingAfterPublish:(BOOL)a11 beforeEditPublish:(id /* block */)a12;
- (id)shareAsStoryWithAweme:(id)a0 unmodifiablePublishParams:(id)a1 enterFrom:(id)a2;
- (id)startBirthdayVideoEditViewControllerWithEffects:(id)a0 currentEffect:(id)a1 forUser:(id)a2 imModel:(id)a3;
- (id)handleVideosWithSelectedWithAssetModel:(id)a0 publishViewModel:(id)a1 fromView:(id)a2;
- (id)shareAsStoryWithAweme:(id)a0 unmodifiablePublishParams:(id)a1 enterFrom:(id)a2 trackParams:(id)a3;
- (BOOL)enableShareImageAlbumAsStory;
- (void)createStoryFromProfileWithSignatureContent:(id)a0 publishButtonTitle:(id)a1 publishButtonClickBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (id)shareAsStoryWithAweme:(id)a0 unmodifiablePublishParams:(id)a1 extraInfo:(id)a2 enterFrom:(id)a3;
- (id)shareAsStoryWithAweme:(id)a0 unmodifiablePublishParams:(id)a1 extraInfo:(id)a2 enterFrom:(id)a3 trackParams:(id)a4;
- (id)startMusicShareToStoryVideoEditWithMusicId:(id)a0 extraInfo:(id)a1;
- (BOOL)shouldEnableShareAsStoryWithAwemeModel:(id)a0;
- (id)p_optimizedShareImageAlbumAsStoryWithAweme:(id)a0 index:(int)a1 unmodifiablePublishParams:(id)a2 extraInfo:(id)a3 enterFrom:(id)a4 trackParams:(id)a5;
- (id)p_shareImageAlbumAsStoryWithAweme:(id)a0 index:(int)a1 unmodifiablePublishParams:(id)a2 extraInfo:(id)a3 enterFrom:(id)a4 trackParams:(id)a5;
- (id)p_shareAsStoryWithStreamEditAbility:(id)a0 unmodifiablePublishParams:(id)a1 extraInfo:(id)a2 enterFrom:(id)a3 trackParams:(id)a4;
- (id)p_shareAsStoryWithAweme:(id)a0 unmodifiablePublishParams:(id)a1 extraInfo:(id)a2 enterFrom:(id)a3 trackParams:(id)a4;
- (void).cxx_destruct;

@end
