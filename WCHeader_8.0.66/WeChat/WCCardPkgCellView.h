@class UIView, MMWebImageView, UIImage, WCCardData, NSString, UIImageView, UIButton, CAGradientLayer, UILabel, UIColor;

@interface WCCardPkgCellView : MMUIView <MMWebImageViewDelegate>

@property (retain, nonatomic) WCCardData *cardData;
@property (nonatomic) BOOL bMemberCard;
@property (retain, nonatomic) MMWebImageView *backImageView;
@property (retain, nonatomic) UIImageView *backDefaulImageView;
@property (retain, nonatomic) UIImage *defaulDefaulImage;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) UILabel *bottomLabel;
@property (retain, nonatomic) UIButton *tagButton;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *iconBgView;
@property (retain, nonatomic) NSString *backImageURL;
@property (retain, nonatomic) NSString *iconURL;
@property (retain, nonatomic) NSString *topText;
@property (retain, nonatomic) NSString *bottomText;
@property (nonatomic) unsigned int layoutType;
@property (retain, nonatomic) UIColor *topTextColor;
@property (retain, nonatomic) UIColor *bottomTextColor;
@property (retain, nonatomic) NSString *tagText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)itemViewHieght;
+ (double)CardItemViewTopHeight;

- (id)initWithCardData:(id)a0;
- (void)layoutSubviews;
- (void)confiUI;
- (id)getBrandColor;
- (id)scaleToTop:(id)a0 scale:(double)a1;
- (id)scaleToBottom:(id)a0 scale:(double)a1;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
