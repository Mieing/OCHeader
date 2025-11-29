@class UIColor, NSString, UIImageView, UILabel, UIView;

@interface AWEFeedGuideRedButtonView : UIView <AWEFeedGuideRedButtonViewProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) double originAlpha;
@property (retain, nonatomic) UIColor *backGroundToColor;
@property (retain, nonatomic) UIColor *tipsLableToColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTextColor:(id)a0;
- (void)configDefaultBackgroundColor;
- (void)playFlashAnimation;
- (void)updateTips:(id)a0;
- (void)initBackgroundColor;
- (id)tipsDefaultFont;
- (void)updateTipsFont:(id)a0;
- (id)tipsDefaultBigFont;
- (id)transformUIColorFromeString:(id)a0;
- (void)updateBackGroundColor:(id)a0;
- (void)updateOriginalBackGroudColor:(id)a0 alpha:(double)a1;
- (void)updateBackGroundToColor:(id)a0;
- (void)setImageURL:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageTextInterval:(double)a2;
- (void)updateOriginalTipsLabelColor:(id)a0;
- (void)updateOriginalTipsLabelBigFontAdaptive:(BOOL)a0;
- (void)updateTipsLableToColor:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)init;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
