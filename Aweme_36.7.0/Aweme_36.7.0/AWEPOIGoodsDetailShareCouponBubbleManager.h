@class UIView, NSString, AWEPOIGoodsDetailShareCouponBubbleModel, AWEPOIGoodsDetailNavigationBarNewViewModel, AWEPOIGoodsDetailShareCouponBubbleFrequency, AWEPOIGoodsDetailMarketingShareInfoModel, DUXPopover, AWEPOIGoodsDetailShareCouponTagModel;

@interface AWEPOIGoodsDetailShareCouponBubbleManager : NSObject <DUXPopoverDelegate>

@property (retain, nonatomic) AWEPOIGoodsDetailShareCouponBubbleFrequency *frequencyManager;
@property (retain, nonatomic) AWEPOIGoodsDetailNavigationBarNewViewModel *navBarViewModel;
@property (retain, nonatomic) AWEPOIGoodsDetailShareCouponBubbleModel *bubbleModel;
@property (retain, nonatomic) AWEPOIGoodsDetailShareCouponTagModel *tagModel;
@property (retain, nonatomic) AWEPOIGoodsDetailMarketingShareInfoModel *marketingShareInfoModel;
@property (weak, nonatomic) UIView *shareButton;
@property (retain, nonatomic) DUXPopover *popover;
@property (nonatomic) BOOL didShowBubble;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)popoverDidDisappear:(id)a0;
- (id)commonTrackParams;
- (void)showBubbleIfNeed;
- (void)updateWithViewModel:(id)a0 productId:(id)a1 shareButton:(id)a2;
- (void)showTagIfNeed;
- (void).cxx_destruct;

@end
