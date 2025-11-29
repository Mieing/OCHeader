@class MMFinderLiveInstantDiscountWidgetResource, MMCountDownLabel, MoneyOffTagInfo, PAGView, UIView, NSObject, UILabel;
@protocol MMFinderLiveInstantDiscountWidgetDelegate;

@interface MMFinderLiveInstantDiscountWidgetView : UIView

@property (nonatomic) BOOL isBigStyle;
@property (retain, nonatomic) NSObject *isPlayingTag;
@property (retain, nonatomic) MoneyOffTagInfo *currentInfo;
@property (retain, nonatomic) MoneyOffTagInfo *newestInfo;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *pressShadowView;
@property (retain, nonatomic) UILabel *whiteNormalLabel;
@property (retain, nonatomic) UILabel *colorfulNormalLabel;
@property (retain, nonatomic) MMCountDownLabel *whiteCountDownLabel;
@property (retain, nonatomic) MMCountDownLabel *colorfulCountDownLabel;
@property (retain, nonatomic) UIView *labelContainerView;
@property (retain, nonatomic) PAGView *pagView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } enterSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } normalSize;
@property (nonatomic) BOOL shouldShowText;
@property (nonatomic) BOOL isStaticTextStyle;
@property (retain, nonatomic) MMFinderLiveInstantDiscountWidgetResource *resource;
@property (weak, nonatomic) id<MMFinderLiveInstantDiscountWidgetDelegate> delegate;
@property (readonly, nonatomic) double leadForEnterAnimation;
@property (nonatomic) BOOL isAnchorOrAssistant;

- (id)initWithResource:(id)a0 info:(id)a1;
- (void)setTextNormal;
- (void)setTextDone;
- (void)setTextUsed;
- (void)updateLabelsAlpha;
- (void)setText:(id)a0;
- (void)layoutSubviews;
- (void)enter;
- (void)playPAG:(id)a0;
- (void)toNormalState;
- (void)onTapAction;
- (void)startCountDown;
- (void)playAddAnimation:(unsigned long long)a0;
- (void)toSuccess;
- (void)toFail;
- (void)blockWithRestAnimationDuration:(double)a0;
- (void)checkUpdate;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)initContents;
- (void)updateWithInfo:(id)a0;
- (void).cxx_destruct;

@end
