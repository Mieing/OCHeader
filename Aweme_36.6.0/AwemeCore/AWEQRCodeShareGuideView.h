@class UIColor, NSString, UIImageView, UIImage, UILabel;

@interface AWEQRCodeShareGuideView : UIView <AWEQRCodeShareGuideViewProtocol>

@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL forSaveImage;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIImageView *saveImageView;
@property (retain, nonatomic) UIImageView *openAppImageView;
@property (retain, nonatomic) UILabel *saveImageLabel;
@property (retain, nonatomic) UILabel *openAppLabel;
@property (nonatomic) double customImagePadding;
@property (readonly, nonatomic) UIImage *customImage;
@property (retain, nonatomic) UIImage *openAppImage;
@property (retain, nonatomic) UIImage *saveImage;
@property (retain, nonatomic) UIImage *arrowImage;
@property (retain, nonatomic) UIColor *customTextColor;
@property (copy, nonatomic) NSString *openAppLabelText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESharePrepareURLStageCommonAdapterClass;

- (void)removeAllConstraints;
- (id)aAWESharePrepareURLStageCommonAdapter;
- (id)initWithStyle:(unsigned long long)a0 customImagePadding:(double)a1 customImage:(id)a2 forSaveImage:(BOOL)a3;
- (void)setupDefaultGuideView;
- (id)initWithStyle:(unsigned long long)a0 customImage:(id)a1 forSaveImage:(BOOL)a2;
- (double)recommendedHeight;
- (void).cxx_destruct;
- (void)setupViews;

@end
