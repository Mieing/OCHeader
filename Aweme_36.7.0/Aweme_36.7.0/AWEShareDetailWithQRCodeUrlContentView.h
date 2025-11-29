@class UIView;

@interface AWEShareDetailWithQRCodeUrlContentView : AWEShareDetailWithQRCodeBaseContentView

@property (retain, nonatomic) UIView *textContainerView;
@property (nonatomic) unsigned long long coverImageSizeType;
@property (nonatomic) BOOL showsSecondLine;

+ (Class)aAWEShareServiceDOUYINLiteAdaperClass;

- (id)imageToSaveToAlbum;
- (struct CGSize { double x0; double x1; })saveImageSize;
- (void)updateUIConstraints;
- (id)aAWEShareServiceDOUYINLiteAdaper;
- (void)syncContentFrom:(id)a0;
- (void)updateSubviewsForGenerateImage;
- (double)coverImageViewHeight;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)setUpSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;

@end
