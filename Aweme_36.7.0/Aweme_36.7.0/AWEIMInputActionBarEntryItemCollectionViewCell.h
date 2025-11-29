@class UIStackView, UIView, NSString, AWEIMInputActionBarEntryItem, UIImageView, MASConstraint, YYLabel, UIVisualEffectView;

@interface AWEIMInputActionBarEntryItemCollectionViewCell : UICollectionViewCell <AWEIMCountDownTimerListenerProtocol>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *timeLabel;
@property (retain, nonatomic) UIView *contentsContainer;
@property (retain, nonatomic) MASConstraint *iconTrailingToTitleLeading;
@property (retain, nonatomic) MASConstraint *iconWidthConstraint;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIView *backgroundAboveView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (nonatomic) BOOL isHighlited;
@property (nonatomic, getter=isFilled) BOOL filled;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) BOOL isLightStyle;
@property (retain, nonatomic) AWEIMInputActionBarEntryItem *entryItem;
@property (nonatomic) BOOL isInStrangerVc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__displayAttributedStringFromItem:(id)a0;
+ (id)__timeTitleAttributedStringFromItem:(id)a0;
+ (double)actualCellWidthForItem:(id)a0;
+ (id)titleFont;

- (void)addBlurView;
- (void)refreshStyle;
- (double)countDownEndTime;
- (void)removeBlurView;
- (id)currentCountDownTimeTitle;
- (void)onTimerFiredWithEndTime:(double)a0 timeTitle:(id)a1;
- (void)__refreshBasicUI;
- (void)__resetAttributedContent;
- (void)__resetDisplayIcon;
- (void)__resetServerConfiguredIconIfNeeded;
- (id)p_getInteractiveEmoticonIconURL;
- (void)setBlurImage:(id)a0 originView:(id)a1;
- (void)p_clearStackViewSubviews;
- (id)titleColorWithServerConfig;
- (void)p_resetStackView;
- (id)backgroundColorWithServerConfig;
- (void)p_insertIconViewToStackViewIfNeed;
- (void)p_setupUI;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)textColor;

@end
