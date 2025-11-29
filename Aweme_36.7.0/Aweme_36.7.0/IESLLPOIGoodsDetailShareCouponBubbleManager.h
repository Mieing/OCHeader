@class NSString, IESLLPOIGoodsDetailNavigationBarNewViewModel, IESLLPOIGoodsDetailMarketingShareInfoModel, IESLLPOIGoodsDetailShareCouponBubbleFrequency, IESLLPOIGoodsDetailShareCouponBubbleModel, IESLLPOIGoodsDetailShareCouponTagModel, UIView;
@protocol IESLLPopoverInterface;

@interface IESLLPOIGoodsDetailShareCouponBubbleManager : NSObject <IESLLPopoverDelegate>

@property (retain, nonatomic) IESLLPOIGoodsDetailShareCouponBubbleFrequency *frequencyManager;
@property (retain, nonatomic) IESLLPOIGoodsDetailNavigationBarNewViewModel *navBarViewModel;
@property (retain, nonatomic) IESLLPOIGoodsDetailShareCouponBubbleModel *bubbleModel;
@property (retain, nonatomic) IESLLPOIGoodsDetailShareCouponTagModel *tagModel;
@property (retain, nonatomic) IESLLPOIGoodsDetailMarketingShareInfoModel *marketingShareInfoModel;
@property (weak, nonatomic) UIView *shareButton;
@property (retain, nonatomic) UIView<IESLLPopoverInterface> *popover;
@property (nonatomic) BOOL didShowBubble;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (void)showBubbleIfNeed;
- (void)updateWithViewModel:(id)a0 productId:(id)a1 shareButton:(id)a2;
- (void)showTagIfNeed;
- (void)popoverDidDisappear;
- (void).cxx_destruct;

@end
