@class ImageReaderMessageViewModel, BrandMultiImageCoverView, BrandImageCountView, BrandImageCoverGradientView;

@interface MultiImageReaderMessageCellView : ReaderMessageCellView

@property (retain, nonatomic) BrandMultiImageCoverView *multiCoverView;
@property (retain, nonatomic) BrandImageCountView *imageCountView;
@property (retain, nonatomic) BrandImageCoverGradientView *gradientBGView;
@property (readonly, nonatomic) ImageReaderMessageViewModel *viewModel;

- (void)setupUI;
- (void)layoutContentView;
- (void)setupConstraints;
- (void)updateTitle;
- (void).cxx_destruct;

@end
