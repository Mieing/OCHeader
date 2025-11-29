@class UIImageView, UILabel, UIView;

@interface AWEJingxuanShareDetailWithQRCodePublishedOptimizeContentView : AWEShareDetailWithQRCodeBaseContentView

@property (retain, nonatomic) UIImageView *playIconView;
@property (retain, nonatomic) UIImageView *loveIconView;
@property (retain, nonatomic) UIImageView *commentIconView;
@property (retain, nonatomic) UIImageView *shareIconView;
@property (retain, nonatomic) UIView *textContainerView;
@property (retain, nonatomic) UIView *videoInfo;
@property (retain, nonatomic) UILabel *scanSlogan;
@property (retain, nonatomic) UIImageView *userAvatarView;
@property (retain, nonatomic) UILabel *loveLabel;
@property (retain, nonatomic) UILabel *commentLabel;
@property (retain, nonatomic) UILabel *shareLabel;

- (id)imageToSaveToAlbum;
- (void)syncContentFrom:(id)a0;
- (void)updateSubviewsForGenerateImage;
- (void)fetchImageWithContext:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateLineSpaceForLabel:(double)a0;
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
- (void)setTemplateModel:(id)a0;

@end
