@class UIView, MMWebImageView, UIImage, NSString, UIImageView, UIButton, CAGradientLayer, UILabel, UIColor;

@interface WCCardMemberCardCell : WCCardMultiMenuCollectionViewCell <MMWebImageViewDelegate>

@property (retain, nonatomic) MMWebImageView *backImageView;
@property (retain, nonatomic) UIImageView *backDefaulImageView;
@property (retain, nonatomic) UIImage *defaulDefaulImage;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) UILabel *bottomLabel;
@property (retain, nonatomic) UIButton *tagButton;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *iconBgView;
@property (retain, nonatomic) NSString *backImageURL;
@property (retain, nonatomic) UIColor *backColor;
@property (retain, nonatomic) NSString *iconURL;
@property (retain, nonatomic) NSString *topText;
@property (retain, nonatomic) NSString *bottomText;
@property (nonatomic) unsigned int layoutType;
@property (retain, nonatomic) NSString *tagText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)confiUI;
- (id)scaleToTop:(id)a0 scale:(double)a1;
- (id)scaleToBottom:(id)a0 scale:(double)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
