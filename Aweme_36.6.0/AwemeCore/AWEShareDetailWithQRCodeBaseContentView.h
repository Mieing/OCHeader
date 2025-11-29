@class UIView, NSString, NSArray, UIImage, AWEShareDetailWithQRCodeViewController, UIImageView, AWEQRCodeShareGuideView, UILabel;

@interface AWEShareDetailWithQRCodeBaseContentView : UIView <AWEShareDetailWithQRCodeBaseContentViewLayout, AWEShareQRCodeExtension>

@property (retain, nonatomic) UIImageView *douImageView;
@property (retain, nonatomic) UIView *coverBackgroundView;
@property (retain, nonatomic) AWEQRCodeShareGuideView *shareGuideView;
@property (weak, nonatomic) AWEShareDetailWithQRCodeViewController *viewController;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *signatureLabel;
@property (retain, nonatomic) UIImageView *QRCodeImageView;
@property (copy, nonatomic) NSArray *QRCodeUrlList;
@property (retain, nonatomic) UIImageView *iconLogoImageView;
@property (nonatomic) long long shareType;
@property (nonatomic) unsigned long long targetType;
@property (retain, nonatomic) UILabel *livingLabel;
@property (retain, nonatomic) UIImage *customGuideImage;
@property (retain, nonatomic) UIImage *customGuideImageForSave;
@property (retain, nonatomic) NSString *detailString;
@property (nonatomic) BOOL isQRCodeLoaded;
@property (nonatomic) BOOL isCoverLoaded;
@property (nonatomic) BOOL isAuthorLabelGradient;
@property (nonatomic) BOOL isDescLabelGradient;
@property (nonatomic) BOOL shouldShowExpireTime;
@property (nonatomic) BOOL shouldDisplayDouyinLiteStyle;
@property (nonatomic) unsigned long long shareGuideStyle;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESharePrepareURLStageCommonAdapterClass;

- (id)imageToSaveToAlbum;
- (struct CGSize { double x0; double x1; })saveImageSize;
- (id)aAWESharePrepareURLStageCommonAdapter;
- (void)fetchQRCodeImageWithContext:(id)a0 completion:(id /* block */)a1;
- (void)syncContentFrom:(id)a0;
- (void)updateSubviewsForGenerateImage;
- (void)layoutContentViewWhenSave:(id)a0 sloganView:(id)a1 viewToSave:(id)a2;
- (void)setupShareGuideView;
- (id)addGradientLayerForLabel:(id)a0;
- (void)updateShareGuideView;
- (void)layoutSubviewIfNeed;
- (void)fetchImageWithContext:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)layoutSubviews;
- (BOOL)stringContainsEmoji:(id)a0;
- (void)setUpSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;
- (void)setTemplateModel:(id)a0;

@end
