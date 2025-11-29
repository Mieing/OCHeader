@class CAGradientLayer, NSString, UIView, MMUIButton, MinimizeTaskContentView;
@protocol MinimizeTaskConatinerDelegate;

@interface MinimizeTaskConatinerView : UIView

@property (nonatomic) unsigned int style;
@property (retain, nonatomic) MMUIButton *playPauseButton;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUIButton *outerContentButton;
@property (retain, nonatomic) UIView *outerContentView;
@property (retain, nonatomic) CAGradientLayer *gradientShadowLayer;
@property (retain, nonatomic) MinimizeTaskContentView *coverView;
@property (retain, nonatomic) UIView *customizedLeftView;
@property (retain, nonatomic) UIView *customizedTopRightView;
@property (nonatomic) double coverWidth;
@property (nonatomic) BOOL isPlaying;
@property (weak, nonatomic) id<MinimizeTaskConatinerDelegate> delegate;
@property (retain, nonatomic) NSString *accessibilityBizPrefix;
@property (nonatomic) unsigned int bottomStyle;
@property (nonatomic) BOOL customizedLeftViewAutoResize;

+ (struct CGSize { double x0; double x1; })fullSizeForOuterContentViewSize:(struct CGSize { double x0; double x1; })a0;

- (id)initWitStyle:(unsigned int)a0;
- (id)initWitStyle:(unsigned int)a0 coverWidth:(double)a1;
- (void)setupSubviews;
- (void)setCoverImageUrl:(id)a0;
- (void)setCoverDefaultImage:(id)a0;
- (void)setCoverImage:(id)a0;
- (void)setPlayOrPauseButtonDisabled:(BOOL)a0;
- (void)setShadowShow:(BOOL)a0;
- (void)setButtonsShow:(BOOL)a0;
- (void)setOuterContentViewAccessibilityLabel:(id)a0;
- (id)buttonTintColor;
- (void)layoutSubviews;
- (void)onPlayPauseButtonClicked;
- (void)onCloseButtonClicked;
- (void)onOuterContentViewClicked;
- (void)setCloseButtonState:(unsigned int)a0;
- (void)setPlayOrPauseButtonState:(unsigned int)a0;
- (void)setUpButton:(id)a0 withState:(unsigned int)a1;
- (void).cxx_destruct;

@end
