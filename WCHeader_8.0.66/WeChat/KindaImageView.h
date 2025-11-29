@class KindaImage, WCPayWebImageView, MMKViewOnTouchCallback, NSData, NSString, MMDynamicColor;

@interface KindaImageView : KindaView <WCPayWebImageViewDelegate, MMKImageView>

@property (retain, nonatomic) WCPayWebImageView *m_imageView;
@property (nonatomic) long long m_scaleType;
@property (retain, nonatomic) KindaImage *m_image;
@property (retain, nonatomic) KindaImage *m_defaultImage;
@property (retain, nonatomic) MMDynamicColor *tintColor;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) MMKViewOnTouchCallback *touchCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getView;
- (void)setUrl:(id)a0;
- (void)setDarkModeUrl:(id)a0;
- (id)getDarkModeUrl;
- (id)getUrl;
- (void)setDefaultUrl:(id)a0;
- (id)getDefaultUrl;
- (void)setImage:(id)a0;
- (id)getImage;
- (void)setScaleType:(long long)a0;
- (long long)getScaleType;
- (id)getImageData;
- (id)getTintColor;
- (void)updateImage;
- (void)updateImageStyle;
- (void)mm_onColorAppearanceDidChange;
- (void)onLoadWCPayWebImageOK:(id)a0;
- (void)onImageViewTouchStateChange:(id)a0 state:(unsigned long long)a1 touchPoint:(struct CGPoint { double x0; double x1; })a2;
- (void).cxx_destruct;

@end
