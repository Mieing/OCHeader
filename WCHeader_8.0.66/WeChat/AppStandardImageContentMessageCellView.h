@class MMGradientView, AppStandardContentSourceView, UIImageView, AppStandardImageContentMessageViewModel, AppStandardContentExternalLoadImageView, UIView, MMUILabel;
@protocol AppStandardContentExternalLoadImageView;

@interface AppStandardImageContentMessageCellView : CommonMessageCellView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIView<AppStandardContentExternalLoadImageView> *mainImageView;
@property (retain, nonatomic) AppStandardContentExternalLoadImageView *mainImgContainerView;
@property (retain, nonatomic) MMGradientView *metaDataBgView;
@property (retain, nonatomic) UIImageView *metadataVideoPlayIcon;
@property (retain, nonatomic) MMUILabel *metadatalabel;
@property (retain, nonatomic) UIView *addOnBgView;
@property (retain, nonatomic) AppStandardContentSourceView *sourceView;
@property (readonly, nonatomic) AppStandardImageContentMessageViewModel *viewModel;

- (void)prepareForReuse;
- (void)layoutContentView;
- (void)initMainImage;
- (void)initTitle;
- (void)initMetaData;
- (void)initSourceView;
- (void)createOrUpdateLayout;
- (id)imageViewInSize:(struct CGSize { double x0; double x1; })a0;
- (id)additionalContentViewInSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutAddOnViewsIn:(id)a0;
- (void).cxx_destruct;

@end
