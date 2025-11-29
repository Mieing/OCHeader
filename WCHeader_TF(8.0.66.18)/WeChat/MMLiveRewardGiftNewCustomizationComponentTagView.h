@class MMFinderLiveNewCustomGiftComponentValue, UIImageView, MMWebImageView, UIView, MMUILabel;

@interface MMLiveRewardGiftNewCustomizationComponentTagView : UIView

@property (retain, nonatomic) MMFinderLiveNewCustomGiftComponentValue *componentValue;
@property (nonatomic) unsigned long long uiStyle;
@property (retain, nonatomic) UIView *selectStyleView;
@property (retain, nonatomic) UIView *contentBackView;
@property (retain, nonatomic) MMWebImageView *contentImgView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) UIImageView *beanIconView;
@property (retain, nonatomic) MMUILabel *beanCntLabel;
@property (retain, nonatomic) MMUILabel *beanIncreaseLabel;
@property (nonatomic) BOOL isSelect;
@property (copy, nonatomic) id /* block */ componentTagTapCallback;

+ (double)preferWidth;
+ (double)preferHeight;
+ (double)leftInset;

- (id)initWithComponentValue:(id)a0 uiStyle:(unsigned long long)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutSelectStyleView;
- (void)updateSelectStyleViewBorderColor;
- (void)layoutContentBackView;
- (void)layoutContentImgView;
- (double)contentImageViewWidth;
- (void)layoutNameLabel;
- (void)layoutBeanWidgets;
- (void)layoutBeanIncreaseLabel;
- (void)layoutBeanIconView;
- (void)layoutBeanCntLabel;
- (void)updateBeanWidgetsOrigin;
- (void)onComponentTagTap:(id)a0;
- (void).cxx_destruct;

@end
