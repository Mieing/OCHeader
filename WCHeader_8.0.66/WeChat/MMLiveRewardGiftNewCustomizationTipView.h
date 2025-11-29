@class MMFinderLiveGiftNewCustomizationModel, MMUILabel, MMFinderLiveRewardGiftItem;

@interface MMLiveRewardGiftNewCustomizationTipView : MMRectTriangleArrowView

@property (retain, nonatomic) MMUILabel *tipLabel;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (retain, nonatomic) MMFinderLiveGiftNewCustomizationModel *customizationModel;
@property (copy, nonatomic) id /* block */ selfSizeChangeCallback;
@property (copy, nonatomic) id /* block */ onTapCallback;

+ (double)preferHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(long long)a1;
- (void)layoutSubviews;
- (void)addGestures;
- (void)layoutUI;
- (void)layoutTipLabel;
- (void)updateTipLabelOrigin;
- (void)updateTipContent;
- (void)updateSelfWidthIfNeeded;
- (void)updateWithGiftItem:(id)a0;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (double)selfCornerRadius;
- (void)onTapCustomizationTip:(id)a0;
- (void).cxx_destruct;

@end
