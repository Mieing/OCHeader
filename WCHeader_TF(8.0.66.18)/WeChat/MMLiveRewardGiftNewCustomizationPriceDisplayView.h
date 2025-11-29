@class UIImageView, MMFinderLiveGiftNewCustomizationModel, MMUILabel;

@interface MMLiveRewardGiftNewCustomizationPriceDisplayView : UIView

@property (retain, nonatomic) MMFinderLiveGiftNewCustomizationModel *customizationModel;
@property (retain, nonatomic) MMUILabel *sumBeanTipLabel;
@property (retain, nonatomic) UIImageView *beanIconView;
@property (retain, nonatomic) MMUILabel *beanCntLabel;
@property (retain, nonatomic) MMUILabel *beanCntExplainLabel;

- (id)initWithCustomizationModel:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutSumBeanTipLabel;
- (void)layoutBeanIconView;
- (void)layoutBeanCntLabel;
- (void)layoutBeanCntExplainLabel;
- (id)getBeanCntExplainAttributedText;
- (void)updateBeanCntExplainLabelHidden;
- (void)updateBeanWidgetsOrigin;
- (void)updateSumBeanCntDisplay;
- (void).cxx_destruct;

@end
