@interface ACCNoteAutoCropUtils : NSObject

+ (BOOL)enableAutoCropForNoteWithImageAlbum:(id)a0 publishModel:(id)a1;
+ (BOOL)shouldAutoCropForNoteWithPublishModel:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)cropImageToRecommendRatioWithImage:(id)a0 publishModel:(id)a1;
+ (void)noteAutoCropIfNeededWithPublishModel:(id)a0 nle:(id)a1 slot:(id)a2;
+ (BOOL)enableNoteStickerFollowEditCanvasChange:(id)a0;
+ (BOOL)enableAutoCropForNoteWithPublishModel:(id)a0;
+ (BOOL)shouldAutoCropForNoteWithPublishModel:(id)a0;
+ (BOOL)isRecommendRatioWith:(double)a0;
+ (struct CGSize { double x0; double x1; })normalizedSizeForNoteAutoCropWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)cropImageWithImage:(id)a0 normalizedSize:(struct CGSize { double x0; double x1; })a1 publishModel:(id)a2;
+ (BOOL)shouldAutoCropForNoteWithSlot:(id)a0 resourceSize:(struct CGSize { double x0; double x1; })a1;
+ (id)generateCropPointsWithNormalizedSize:(struct CGSize { double x0; double x1; })a0;
+ (long long)ratioTypeForNoteAutoCropWithSize:(struct CGSize { double x0; double x1; })a0;
+ (double)ratioForNoteAutoCropWithSize:(struct CGSize { double x0; double x1; })a0;
+ (void)showAutoCropToastWithShowView:(id)a0 highlightedTextClickBlock:(id /* block */)a1;

@end
