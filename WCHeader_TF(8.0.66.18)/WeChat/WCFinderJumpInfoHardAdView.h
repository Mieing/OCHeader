@class WCFinderTextCarouselView, MMUIButton, MMTimer, NSString, UILabel, MMWebImageView, FinderJumpInfo_Style;

@interface WCFinderJumpInfoHardAdView : WCFinderJumpInfoView <MMWebImageViewDelegate>

@property (retain, nonatomic) FinderJumpInfo_Style *jumpInfoStyle;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WCFinderTextCarouselView *descCarouselView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (weak, nonatomic) MMWebImageView *infoIconView;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } actionBtnFrameBeforeAnimation;
@property (nonatomic) struct CGSize { double width; double height; } selfSizeBeforeAnimation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } actionBtnFrameAfterAnimation;
@property (nonatomic) double minWidth;
@property (nonatomic) double maxWidth;
@property (nonatomic) unsigned long long currentPhase;
@property (retain, nonatomic) MMTimer *expandTimer;
@property (nonatomic) unsigned long long viewExpandTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setPhase:(unsigned long long)a0 animated:(BOOL)a1;
- (void)onActionButtonDidClick;
- (void)layoutUI;
- (void)notifyToShow;
- (void)notifyToExpand;
- (id)cardBackgroundColor;
- (id)iconUrl;
- (id)titleColor;
- (id)titleText;
- (id)descTextColor;
- (id)descTextArray;
- (id)descTextArrayWithStyle:(unsigned long long)a0;
- (id)infoIconUrl;
- (id)infoText;
- (id)infoTextColor;
- (id)buttonText;
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
- (void)startExposeAction;
- (void)endExposeAction;
- (unsigned long long)viewExpandTime;
- (void)onLoadImageOK:(id)a0;
- (void)onLoadImageFail:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;

@end
