@class CJPayStandardButtonCycleView, NSString, NSDictionary, UIFont, UILabel, UIView, UIButton;

@interface CJPayStandardButton : UIView

@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) UIButton *contentButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *loadingContainerView;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) CJPayStandardButtonCycleView *cycleView;
@property (copy, nonatomic) NSString *action;
@property (weak, nonatomic) id target;
@property (copy, nonatomic) NSDictionary *buttonStyleNormalBorderColorMap;
@property (copy, nonatomic) NSDictionary *buttonStyleNormalBackgroundColorMap;
@property (copy, nonatomic) NSDictionary *buttonStyleNormalTitleColorMap;
@property (copy, nonatomic) NSDictionary *buttonStyleDisableBorderColorMap;
@property (copy, nonatomic) NSDictionary *buttonStyleDisableBackgroundColorMap;
@property (copy, nonatomic) NSDictionary *buttonStyleDisableTitleColorMap;
@property (copy, nonatomic) NSDictionary *buttonStyleHighlightedBorderColorMap;
@property (copy, nonatomic) NSDictionary *buttonStyleHighlightedBackgroundColorMap;
@property (copy, nonatomic) NSDictionary *buttonStyleHighlightedTitleColorMap;
@property (copy, nonatomic) NSDictionary *buttonSizeHeightMap;
@property (copy, nonatomic) NSDictionary *buttonSizeCornerRadiusMap;
@property (copy, nonatomic) NSDictionary *buttonSizeTitleSizeMap;
@property (readonly, nonatomic) NSString *titleLabelText;
@property (readonly, nonatomic) NSString *currentAttributedTitle;
@property (nonatomic) unsigned long long customViewLocation;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL disablesInteractionWhenLoading;

- (void)p_startLoadingAnimation;
- (void)p_stopLoadingAnimation;
- (id)initWithStyle:(unsigned long long)a0 size:(unsigned long long)a1;
- (void)startLeftLoading;
- (void)stopLeftLoading;
- (void)p_makeUI;
- (void)p_configButtonContentText:(BOOL)a0;
- (void)p_configCycleViewStrokeColor;
- (void)p_remakeContentButton;
- (void)p_adjustContentButtonTopSpace;
- (double)p_buttonContentHeight:(unsigned long long)a0;
- (double)p_buttonCornerRadius:(unsigned long long)a0;
- (id)p_buttonBgColorWithStyle:(unsigned long long)a0 state:(unsigned long long)a1;
- (id)p_buttonBorderColor:(unsigned long long)a0 state:(unsigned long long)a1;
- (id)p_buttonTitleColorWithStyle:(unsigned long long)a0 state:(unsigned long long)a1;
- (id)p_createTransformRotationAnimation;
- (void)p_contentButtonAction:(id)a0;
- (void)p_timeoutStopLoading;
- (void).cxx_destruct;
- (void)setAttributedTitle:(id)a0 forState:(unsigned long long)a1;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void)startLoading;
- (void)setTitle:(id)a0;
- (void)stopLoading;
- (void)setAttributedTitle:(id)a0;
- (void)layoutSubviews;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;

@end
