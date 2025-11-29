@interface AWEGeneralSearchBusinessImagePlayerDataTransform : NSObject

+ (id)tokenTypeForModel:(id)a0;
+ (BOOL)shouldShowAlbumProgress:(id)a0;
+ (void)updateBaseImagePlayerModelWith:(id)a0 cardModel:(id)a1 containerWidth:(double)a2 logExtra:(id)a3;
+ (void)updateImageInteractorModelWith:(id)a0 cardModel:(id)a1 logExtra:(id)a2;
+ (id)createImagePlayerLogExtraWithVideoCardModel:(id)a0;
+ (id)createImageCutRatioConfigModelWith:(id)a0 containerWidth:(double)a1;
+ (BOOL)albumMutePlayWithAwemeModel:(id)a0;
+ (BOOL)albumDisableAutoPlayWithAwemeModel:(id)a0;
+ (id)createBtmInfoWith:(id)a0;
+ (void)updateImageInteractorLeftTopModelWith:(id)a0 awemeModel:(id)a1 cardModel:(id)a2 referString:(id)a3 logExtra:(id)a4;
+ (void)updateImageInteractorLeftBottomModelWith:(id)a0 awemeModel:(id)a1 referString:(id)a2 logExtra:(id)a3;
+ (void)updateImageInteractorRightTopModelWith:(id)a0 awemeModel:(id)a1 referString:(id)a2 logExtra:(id)a3;
+ (void)updateImageProgressModelWith:(id)a0 awemeModel:(id)a1 referString:(id)a2 logExtra:(id)a3;
+ (BOOL)shouldShowAlbumBadge:(id)a0;
+ (struct CGSize { double x0; double x1; })calculateAlbumContainerSizeWithModel:(id)a0;
+ (BOOL)shouldUseNewImagePlayerCutRatio;
+ (id)btmIdWithModel:(id)a0;
+ (id)dcmIdWithModel:(id)a0;
+ (id)coCreateTrackParamsWithAwemeModel:(id)a0;
+ (id)getStandardImagePlayerModelWithSearchVideoCardModel:(id)a0 containerWidth:(double)a1;
+ (void)updateStandardVideoPlayerModel:(id)a0 WithSearchVideoCardModel:(id)a1 containerWith:(double)a2;

@end
