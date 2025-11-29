@class UIImageView, UIView;

@interface AWEShareDetailWithQRCodePublishedOptimizeContentView : AWEShareDetailWithQRCodeBaseContentView

@property (retain, nonatomic) UIImageView *playIconView;
@property (retain, nonatomic) UIView *textContainerView;

- (id)imageToSaveToAlbum;
- (struct CGSize { double x0; double x1; })contentToSaveSize;
- (struct CGSize { double x0; double x1; })saveImageSize;
- (void)syncContentFrom:(id)a0;
- (void)updateSubviewsForGenerateImage;
- (void)fetchImageWithContext:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateCoverImage:(id)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })properSaveContentSizeWithImage:(id)a0;
- (struct CGSize { double x0; double x1; })properContentSizeWithImage:(id)a0;
- (void)setCoverImageWithProperCropping:(id)a0;
- (struct CGSize { double x0; double x1; })properPreviewCoverImageSizeWithImage:(id)a0;
- (struct CGSize { double x0; double x1; })properSaveCoverImageSizeWithImage:(id)a0;
- (struct CGSize { double x0; double x1; })properPreviewCoverImageSizeWithHeight:(double)a0 width:(double)a1;
- (struct CGSize { double x0; double x1; })properSaveCoverImageSizeWithHeight:(double)a0 width:(double)a1;
- (void)updateLabelsWithContext:(id)a0;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)setUpSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;
- (void)setTemplateModel:(id)a0;

@end
