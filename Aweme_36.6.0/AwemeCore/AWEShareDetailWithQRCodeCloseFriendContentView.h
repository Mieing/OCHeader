@class NSString, UIView;

@interface AWEShareDetailWithQRCodeCloseFriendContentView : AWEShareDetailWithQRCodeBaseContentView

@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) UIView *textContainerView;

- (id)imageToSaveToAlbum;
- (struct CGSize { double x0; double x1; })saveImageSize;
- (void)syncContentFrom:(id)a0;
- (void)updateSubviewsForGenerateImage;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)setUpSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;

@end
