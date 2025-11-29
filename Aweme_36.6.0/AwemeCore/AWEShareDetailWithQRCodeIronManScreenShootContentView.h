@class UILabel, UIView;

@interface AWEShareDetailWithQRCodeIronManScreenShootContentView : AWEShareDetailWithQRCodeBaseContentView

@property (retain, nonatomic) UILabel *ironManIconView;
@property (retain, nonatomic) UIView *postCardView;
@property (retain, nonatomic) UIView *textContainerView;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double posterHeight;

- (id)imageToSaveToAlbum;
- (void)syncContentFrom:(id)a0;
- (void)updateSubviewsForGenerateImage;
- (struct CGSize { double x0; double x1; })generateImageSize;
- (id)imageToShareIM;
- (id)shareContentImage;
- (void).cxx_destruct;
- (id)init;
- (void)setContext:(id)a0;
- (void)setUpSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;

@end
