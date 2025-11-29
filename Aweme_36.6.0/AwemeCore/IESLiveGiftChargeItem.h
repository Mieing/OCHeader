@class NSString, RACCommand, IESLiveGiftPanelDataSharing;
@protocol IESLiveGiftPanelReaction;

@interface IESLiveGiftChargeItem : IESLiveRefactGiftPanelSectionViewModel <IESLiveRefactGiftPanelEventAction, IESLiveCollectionViewItemProtocol>

@property (nonatomic) BOOL userInteractionEnabled;
@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;
@property (readonly, nonatomic) RACCommand *chargeActionCommand;
@property (readonly, nonatomic) RACCommand *chargeBubbleTapActionCommand;
@property (readonly, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (copy, nonatomic) id /* block */ updateFirstChargeBannerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cellClass;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) RACCommand *didSelectItemCommand;

- (void)didSetAttachingDIContext;
- (void)gpe_updateFirstChargeBanner;
- (void)updateFirstChargeBanner;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)p_rechargeActionNormal:(BOOL)a0;
- (void)p_chargeBubbleTaped;
- (void)p_registerFirstChargeTip;
- (void)p_firstRechargeAction;
- (void).cxx_destruct;
- (BOOL)shouldHideArrow;

@end
