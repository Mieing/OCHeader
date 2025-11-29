@class UIView, NSString, WCFinderJumpInfo, WCFinderLottieImgBackgroundView, WCFinderContact, UIImageView, WCFinderJumpInfoIconView, RichTextView, UILabel, WCFinderHotBigBubbleView;

@interface WCFinderHotSpotBannerView : WCFinderJumpInfoView <WCFinderLottieImgBackgroundViewDelegate, WCActionSheetDelegate, WCFinderHotBigBubbleViewDelegate, WCFinderJumpInfoIconViewDelegate>

@property (nonatomic) double maxTextAreaWidth;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) WCFinderJumpInfoIconView *iconView;
@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) WCFinderJumpInfo *hotSpotJumpInfo;
@property (nonatomic) unsigned long long operatingType;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *adLabel;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) RichTextView *subTitleTextView;
@property (retain, nonatomic) NSString *livingTitle;
@property (retain, nonatomic) NSString *livingSubTitle;
@property (retain, nonatomic) WCFinderLottieImgBackgroundView *olympicView;
@property (retain, nonatomic) WCFinderContact *originalContact;
@property (retain, nonatomic) WCFinderHotBigBubbleView *hotBigBubbleView;
@property (readonly, nonatomic) BOOL isCameraTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getHotSpotHeight:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hotSpotJumpInfo:(id)a1;
- (id)initWithWithIsLivingStateAndFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 subTitle:(id)a2 maxTextAreaWidth:(double)a3;
- (id)initWithWithIsLivingStateAndFrameForProductShare:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 operatingType:(unsigned long long)a1;
- (void)dealloc;
- (void)setMaxWidth:(double)a0 maxTextAreaWidth:(double)a1;
- (void)updateLayoutView;
- (void)addShape:(id)a0;
- (BOOL)hotJumpInfoDisplayRightStyle;
- (void)_updateOlympicsViewWithTitle:(id)a0 subTitle:(id)a1;
- (void)_updateHotSpotWithIconUrl:(id)a0 iconType:(int)a1 pagIconUrl:(id)a2 defaultImage:(id)a3 tips:(id)a4 style:(long long)a5 maxTextWidth:(double)a6 businessType:(int)a7;
- (BOOL)showArrowRedDot;
- (void)_updateLivingTip;
- (void)setupRedDotView:(BOOL)a0 layoutArrowView:(double *)a1;
- (void)onClickAction;
- (void)onClickEnterLivingAction;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (id)jumpInfo;
- (void)onChangeSuperViewWidth:(double)a0;
- (void)onBigBubbleChangeSuperViewWidth:(double)a0;
- (BOOL)videoPauseState;
- (id)videoTid;
- (void).cxx_destruct;

@end
