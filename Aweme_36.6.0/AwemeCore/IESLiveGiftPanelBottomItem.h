@class NSString, IESLiveGiftChargeItem, IESLiveGiftAnchorPanelItem, IESLiveGiftPanelDataSharing, IESLiveGiftTabListItem, IESLiveGiftRedeemItem, RACCommand;
@protocol IESLiveGiftPanelReaction, IESLiveGiftPanelOperationItemService;

@interface IESLiveGiftPanelBottomItem : IESLiveRefactGiftPanelSectionViewModel <IESLiveCollectionViewItemProtocol>

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (nonatomic) long long type;
@property (retain, nonatomic) IESLiveGiftChargeItem *chargeSectionVM;
@property (retain, nonatomic) IESLiveGiftAnchorPanelItem *anchorPanelSectionVM;
@property (retain, nonatomic) IESLiveGiftTabListItem *tabListSectionVM;
@property (retain, nonatomic) IESLiveGiftRedeemItem *redeemSectionVM;
@property (retain, nonatomic) id<IESLiveGiftPanelOperationItemService> diamondChangeSectionVM;
@property (retain, nonatomic) Class cellClass;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) RACCommand *didSelectItemCommand;
@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateFirstChargeBanner;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)didGiftPanelCollectionVMsUpdate;
- (void).cxx_destruct;

@end
