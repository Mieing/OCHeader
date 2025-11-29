@class CAGradientLayer, AWEScrollStringLabel, UIImageView, AWESelectTemplateCollectionViewCellConfig, UILabel, UIView;
@protocol ACCMVTemplateModelProtocol;

@interface AWESelectTemplateCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *selectedIndicatorView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CAGradientLayer *labelGradientLayer;
@property (retain, nonatomic) AWEScrollStringLabel *scrollLabel;
@property (retain, nonatomic) CAGradientLayer *fadeLayer;
@property (retain, nonatomic) UIView *selectedMaskView;
@property (retain, nonatomic) UIImageView *selectedIconImgView;
@property (retain, nonatomic) UILabel *selectedLabel;
@property (retain, nonatomic) UIView *notemplateView;
@property (retain, nonatomic) UIImageView *notemplateImageView;
@property (retain, nonatomic) UIView *retryView;
@property (retain, nonatomic) AWESelectTemplateCollectionViewCellConfig *config;
@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> templateModel;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) BOOL isNoTemplateVideo;
@property (nonatomic) BOOL isShowRetryView;

+ (double)selectTemplateCollectionViewCellHeight:(double)a0;
+ (double)imageAndLabelPadding;
+ (id)identifier;

- (void)updateConfig:(id)a0;
- (void)updateWithCellModel:(id)a0;
- (double)imageViewHeight;
- (id)debugInfoForCellModel:(id)a0;
- (id)debugInfoForTemplate:(id)a0;
- (void)hiddenImageBorder;
- (void)updateTitleViewState:(BOOL)a0;
- (id)alternativeURLsFromStringList:(id)a0;
- (void)updateRetryViewState:(BOOL)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (double)imageViewWidth;

@end
