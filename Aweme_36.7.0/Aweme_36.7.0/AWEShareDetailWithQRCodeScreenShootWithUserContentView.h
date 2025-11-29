@class UIImage;

@interface AWEShareDetailWithQRCodeScreenShootWithUserContentView : AWEShareDetailWithQRCodeScreenShootBaseContentView

@property (retain, nonatomic) UIImage *userHeadImage;

- (id)imageToSaveToAlbum;
- (struct CGSize { double x0; double x1; })saveImageSize;
- (void)fetchQRCodeImageWithContext:(id)a0 completion:(id /* block */)a1;
- (void)wrappedFetchQRCodeImageWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setUpSubviews;

@end
