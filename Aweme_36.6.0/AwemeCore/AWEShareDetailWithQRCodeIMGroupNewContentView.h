@class UIButton, UIImageView, UILabel, AWEShareContext;

@interface AWEShareDetailWithQRCodeIMGroupNewContentView : AWEShareDetailWithQRCodeBaseContentView

@property (retain, nonatomic) UIImageView *rightAlignImageView;
@property (retain, nonatomic) AWEShareContext *context;
@property (retain, nonatomic) UILabel *secondLine;
@property (retain, nonatomic) UIButton *button;

- (id)imageToSaveToAlbum;
- (struct CGSize { double x0; double x1; })saveImageSize;
- (void)syncContentFrom:(id)a0;
- (void)onTapCopyButton;
- (void).cxx_destruct;
- (void)setUpSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;

@end
