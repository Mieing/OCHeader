@class NSMutableArray, NSArray, BrandMultiImageCoverView, BrandImageCountView, BrandImageCoverGradientView;

@interface MultiImageReaderItemView : ReaderItemView

@property (retain, nonatomic) BrandMultiImageCoverView *multiCoverView;
@property (retain, nonatomic) BrandImageCountView *imageCountView;
@property (retain, nonatomic) BrandImageCoverGradientView *gradientBGView;
@property (retain, nonatomic) NSMutableArray *textInsideCoverConstraints;
@property (retain, nonatomic) NSMutableArray *textOutsideCoverConstraints;
@property (nonatomic) unsigned int imageCount;
@property (copy, nonatomic) NSArray *coverImageURLs;

- (void)setupUI;
- (void)topView;
- (void)setupConstraints;
- (void)updateTitle;
- (void).cxx_destruct;

@end
