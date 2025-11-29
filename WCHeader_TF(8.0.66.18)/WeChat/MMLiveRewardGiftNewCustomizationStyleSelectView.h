@class MMLiveRewardGiftNewCustomizationStyleTabContainerView, MMLiveRewardGiftNewCustomizationStyleSelectContainerView, MMLiveRewardGiftNewCustomizationEditLogic;

@interface MMLiveRewardGiftNewCustomizationStyleSelectView : UIView

@property (retain, nonatomic) MMLiveRewardGiftNewCustomizationEditLogic *customizationEditLogic;
@property (retain, nonatomic) MMLiveRewardGiftNewCustomizationStyleTabContainerView *styleTabContainerView;
@property (retain, nonatomic) MMLiveRewardGiftNewCustomizationStyleSelectContainerView *styleSelectContainerView;

- (id)initWithCustomizationEditLogic:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutStyleTabContainerView;
- (double)selectTabContainerLeft;
- (void)layoutStyleSelectContainerView;
- (void).cxx_destruct;

@end
