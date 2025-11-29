@class MMUIButton, MMTimer, UIImageView, UILabel, WCFinderTextCarouselView, FinderJumpInfo_Style;

@interface WCFinderDynamicCardAdView : WCFinderJumpInfoView

@property (retain, nonatomic) FinderJumpInfo_Style *jumpInfoStyle;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WCFinderTextCarouselView *descCarouselView;
@property (retain, nonatomic) UIImageView *descSuffixIconView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (weak, nonatomic) UIImageView *infoIconView;
@property (retain, nonatomic) UILabel *infoSuffixLabel;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } actionBtnFrameBeforeAnimation;
@property (nonatomic) struct CGSize { double width; double height; } selfSizeBeforeAnimation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } actionBtnFrameAfterAnimation;
@property (nonatomic) double minWidth;
@property (nonatomic) double maxWidth;
@property (nonatomic) unsigned long long currentPhase;
@property (retain, nonatomic) MMTimer *expandTimer;
@property (nonatomic) unsigned long long viewExpandTimestamp;

- (id)init;
- (void)dealloc;
- (void)setPhase:(unsigned long long)a0 animated:(BOOL)a1;
- (void)onActionButtonDidClick;
- (void)layoutUI;
- (void)notifyToShow;
- (void)notifyToExpand;
- (id)cardStyle;
- (id)cardStyleAtPhase:(unsigned long long)a0;
- (id)cardBackgroundColor;
- (id)iconUrl;
- (id)titleColor;
- (id)titleText;
- (id)descTextColor;
- (id)descTextArray;
- (id)descTextArrayWithPhase:(unsigned long long)a0;
- (id)descSuffixIconUrl;
- (id)infoIconUrl;
- (id)infoText;
- (id)infoSuffixText;
- (id)infoFont;
- (id)infoTextColor;
- (id)buttonText;
- (id)buttonTextWithPhase:(unsigned long long)a0;
- (id)buttonTitleColor;
- (id)buttonBackgroundColor;
- (int)buttonType;
- (int)imageSizeType;
- (void)updateWithJumpInfo:(id)a0 showPosition:(int)a1;
- (void)expandJumpInfoViewForCompletePlayIfNeeded;
- (void)changeToPhase:(unsigned long long)a0 animated:(BOOL)a1;
- (void)jumpInfoActionBeforeAnimationToPhase:(unsigned long long)a0;
- (void)jumpInfoActionAfterAnimationToPhase:(unsigned long long)a0;
- (void)updateUIInfoWithAnimated:(BOOL)a0;
- (void)updateDescSuffixIconView;
- (void)startExposeAction;
- (void)endExposeAction;
- (unsigned long long)viewExpandTime;
- (void).cxx_destruct;

@end
