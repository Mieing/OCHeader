@class CAGradientLayer, NSString, UIImageView, CALayer, MMUILabel;

@interface ImageReaderItemView : ReaderItemView <MMWebImageViewDelegate> {
    UIImageView *m_imageIcon;
    MMUILabel *m_imageNumLabel;
    CAGradientLayer *m_gradientLayer;
    CALayer *m_coverMaskLayer;
}

@property (nonatomic) unsigned int imageCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)topView;
- (void)normalView;
- (void)onLoadImageOK:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
