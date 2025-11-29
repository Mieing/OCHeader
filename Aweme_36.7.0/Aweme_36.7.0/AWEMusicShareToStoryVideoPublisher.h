@interface AWEMusicShareToStoryVideoPublisher : NSObject

+ (void)p_hideLoadingView;
+ (void)p_logErrorWithError:(id)a0 msg:(id)a1;
+ (void)p_showLoadingViewWithCancelHander:(id /* block */)a0;
+ (void)p_downloadImageWithURLModel:(id)a0 then:(id /* block */)a1;
+ (void)p_downloadMusicWithMusic:(id)a0 then:(id /* block */)a1;
+ (void)p_getOpenPlatformShareIdWithSourceStyleId:(id)a0 trackId:(id)a1 completion:(id /* block */)a2;
+ (void)p_handleNextWithVaildRequirement:(id)a0;
+ (void)p_logInfoWithMsg:(id)a0;
+ (void)p_showErrorToast;
+ (id)p_generatePublishModelWithRequirement:(id)a0;
+ (id)p_coverStickerEffectIdWithIsPGC:(BOOL)a0;
+ (id)p_getDoiminantColorOfImage:(id)a0 topLeftPoint:(struct CGPoint { double x0; double x1; })a1 bottomRightPoint:(struct CGPoint { double x0; double x1; })a2;
+ (id)p_newLyricStickerEffectId;
+ (BOOL)p_isEmptyHashTagName:(id)a0;
+ (BOOL)p_replaceCoverEffectImageResourceWithImage:(id)a0 forEffect:(id)a1;
+ (id)p_coverEffectImageResourceName;
+ (void)handleMusicShareToStoryVideoEditWithMusic:(id)a0 extraInfo:(id)a1 completion:(id /* block */)a2;
+ (id)p_genBackgroundImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 isPGC:(BOOL)a2;
+ (id)p_getDoiminantColorStringOfImage:(id)a0 topLeftPoint:(struct CGPoint { double x0; double x1; })a1 bottomRightPoint:(struct CGPoint { double x0; double x1; })a2;
+ (id)p_coverStickerAnimationEffectId;
+ (id)p_lyricStickerEffectId;

@end
