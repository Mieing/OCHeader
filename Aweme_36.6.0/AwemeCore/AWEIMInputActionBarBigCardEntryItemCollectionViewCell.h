@class AWEIMInputActionBarEntryItem, UIImageView, UIVisualEffectView, UIView, MASConstraint, YYLabel;

@interface AWEIMInputActionBarBigCardEntryItemCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UIView *contentsContainer;
@property (retain, nonatomic) MASConstraint *iconBottomToTitleTop;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (nonatomic) BOOL isHighlited;
@property (nonatomic) BOOL isLightStyle;
@property (nonatomic) BOOL hasBackgroundImage;
@property (retain, nonatomic) AWEIMInputActionBarEntryItem *entryItem;

+ (double)cardHeightForIPad;
+ (id)__displayAttributedStringFromItem:(id)a0;
+ (id)titleFont;
+ (double)cardWidth;

- (BOOL)iPadAdapterEnabled;
- (void)addBlurView;
- (void)refreshStyle;
- (void)removeBlurView;
- (void)__refreshBasicUI;
- (void)__resetAttributedContent;
- (void)__resetDisplayIcon;
- (void)__resetServerConfiguredIconIfNeeded;
- (id)p_getInteractiveEmoticonIconURL;
- (void)setBlurImage:(id)a0 originView:(id)a1;
- (void)p_setupUI;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
