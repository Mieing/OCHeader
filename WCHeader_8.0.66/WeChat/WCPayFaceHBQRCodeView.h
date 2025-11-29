@class UIImageView, NSString;

@interface WCPayFaceHBQRCodeView : UIView {
    UIImageView *_imageQRCodeView;
    UIImageView *_imageQRCodeEmptyView;
    NSString *m_nsQRCode;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 qrWidth:(double)a1;
- (id)renderDataMatrix:(id)a0 imageDimension:(int)a1;
- (void)updateQRCode;
- (void)setQRCode:(id)a0;
- (void).cxx_destruct;

@end
