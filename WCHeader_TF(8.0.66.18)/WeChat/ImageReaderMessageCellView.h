@class MMUILabel, NSString, UIImageView, CAGradientLayer, ImageReaderMessageViewModel;

@interface ImageReaderMessageCellView : ReaderMessageCellView <MMWebImageViewDelegate> {
    UIImageView *m_imageIcon;
    MMUILabel *m_imageNum;
    CAGradientLayer *m_coverMaskLayer;
    CAGradientLayer *m_gradientLayer;
}

@property (readonly, nonatomic) ImageReaderMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutContentView;
- (void)onLoadImageOK:(id)a0;
- (void)onLoadImageFail:(id)a0 extraInfo:(id)a1;
- (void)addCoverMaskLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewingSourceRectForLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateView:(id)a1;
- (void).cxx_destruct;

@end
