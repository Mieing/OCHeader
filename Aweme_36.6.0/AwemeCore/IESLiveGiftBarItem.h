@class UIView, UIScrollView, PageNameStyleInfo, NSString, UIImageView, CAGradientLayer, ScrollPageName, UILabel, UIColor;

@interface IESLiveGiftBarItem : HTSLiveReddotButton <UIScrollViewDelegate, HTSButtonGroupItem>

@property (retain, nonatomic) UIView *cornerBadgeContainer;
@property (retain, nonatomic) UILabel *cornerBadgeTip;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) struct CGSize { double width; double height; } leadingImageSize;
@property (nonatomic) struct CGSize { double width; double height; } trailingImageSize;
@property (retain, nonatomic) UIView *proLabelContainer;
@property (retain, nonatomic) CAGradientLayer *selectedGradientLayer;
@property (retain, nonatomic) CAGradientLayer *normalGradientLayer;
@property (retain, nonatomic) UIScrollView *loopItemView;
@property (nonatomic) unsigned long long scrollPageStatus;
@property (retain, nonatomic) UIView *bottomLine;
@property (readonly, nonatomic) UIImageView *leadImageView;
@property (readonly, nonatomic) UIImageView *trailImageView;
@property (readonly, nonatomic) UILabel *giftBarItemLabel;
@property (retain, nonatomic) UILabel *proLabel;
@property (retain, nonatomic) UIColor *normalTitleColor;
@property (retain, nonatomic) UIColor *selectedTitleColor;
@property (retain, nonatomic) PageNameStyleInfo *pageNameStyleInfo;
@property (retain, nonatomic) ScrollPageName *scrollPageName;
@property (nonatomic) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL disableSelectItem;

- (void)drawCornerBadge;
- (void)loadBarItemSubViews;
- (BOOL)cornerBadgeHidden;
- (void)setLoopTextHidden;
- (id)getLabelGradientLayerWithPageStyleInfo:(id)a0;
- (id)copyView:(id)a0;
- (void)updateGiftBarItemLabelText:(id)a0;
- (void)updateAccessibilityWithValue:(id)a0;
- (void)updateTrailingImage:(id)a0 constraintSize:(struct CGSize { double x0; double x1; })a1;
- (void)rotateImage:(id)a0 type:(unsigned long long)a1 needAnimation:(BOOL)a2;
- (void)setCornerBadgeText:(id)a0;
- (void)setCornerBadgeHidden:(BOOL)a0;
- (void)scrollPageScrollToNext:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
