@class UILabel, UIImageView, UIView;

@interface AWEShareDetailWithQRCodeVirtualAvatarContentView : AWEShareDetailWithQRCodeBaseContentView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *textContainerView;
@property (retain, nonatomic) UILabel *topleftTitleLabel;
@property (retain, nonatomic) UIView *QRCodeContainerView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) double xScale;
@property (nonatomic) double yScale;
@property (nonatomic) double offsetScale;

- (id)imageToSaveToAlbum;
- (struct CGSize { double x0; double x1; })saveImageSize;
- (double)__screenAvailableWidth;
- (double)__screenAvailableHeight;
- (void)syncContentFrom:(id)a0;
- (void)layoutSubviewIfNeed;
- (void)__caculateScale;
- (id)p_currentShareTimeString;
- (void).cxx_destruct;
- (id)init;
- (void)setContext:(id)a0;
- (void)setUpSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;

@end
