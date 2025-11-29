@class IESLiveRefactGiftPanelViewBuilderLayoutInfo, NSString, IESLiveGiftPanelDataSharing;
@protocol IESLiveGiftPanelReaction;

@interface IESLiveRefactGiftPanelVMFactory : NSObject

@property (weak, nonatomic) IESLiveRefactGiftPanelViewBuilderLayoutInfo *layoutInfo;
@property (weak, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;
@property (nonatomic) BOOL topBarRefreshByExtraEnable;
@property (nonatomic) BOOL enableAnchorPanelEntrance;
@property (copy, nonatomic) NSString *anchorPanelUrl;

- (id)redeemSectionVM;
- (id)diamondChangeSectionVM;
- (id)initWithGiftPanelDataSharing:(id)a0 reaction:(id)a1 layoutInfo:(id)a2;
- (id)defaultOperationSectionVM;
- (id)giftRecipientSectionVM;
- (id)giftPrivilegeEntranceBarSectionVM;
- (id)lineSectionVM;
- (id)giftListSectionVM;
- (id)createBottomSectionVMWithType:(long long)a0;
- (id)topicSectionVM;
- (id)authorizeGuideSectionVM;
- (id)giftBuffSectionVM;
- (id)giftBuffLynxSectionVM;
- (id)fantasticGroupSelectListSectionVM;
- (id)longPressSectionVM;
- (id)joinFansClubSectionVM;
- (id)giftAssemblySectionVM;
- (id)giftDynamicCardSectionVM;
- (id)giftMarketAreaSectionVM;
- (id)activityDetailSectionVM;
- (id)dynamicPanelOperationSectionVM;
- (struct CGSize { double x0; double x1; })giftListItemSize;
- (struct CGSize { double x0; double x1; })redeemItemSize;
- (struct CGSize { double x0; double x1; })topicItemSize;
- (id)createBottomItemWithType:(long long)a0;
- (struct CGSize { double x0; double x1; })bottomItemSize;
- (struct CGSize { double x0; double x1; })tabListItemSize;
- (struct CGSize { double x0; double x1; })lineItemSize;
- (struct CGSize { double x0; double x1; })defaultOperationItemSize;
- (struct CGSize { double x0; double x1; })operationPlaceholderSectionSize;
- (struct CGSize { double x0; double x1; })guestInfoItemSize;
- (struct CGSize { double x0; double x1; })giftBuffSectionSize;
- (struct CGSize { double x0; double x1; })fantasticGroupSelectListSize;
- (struct CGSize { double x0; double x1; })joinFansClubSize;
- (struct CGSize { double x0; double x1; })giftAssemblySectionSize;
- (struct CGSize { double x0; double x1; })giftDynamicCardSectionSize;
- (struct CGSize { double x0; double x1; })giftMarketAreaSectionSize;
- (struct CGSize { double x0; double x1; })giftPrivilegeEntranceBarSectionSize;
- (struct CGSize { double x0; double x1; })activityDetailSize;
- (struct CGSize { double x0; double x1; })authorizeGuideItemSize;
- (struct CGSize { double x0; double x1; })diamondChangeItemSize;
- (struct CGSize { double x0; double x1; })honorLevelItemSize;
- (struct CGSize { double x0; double x1; })giftDynamicOperationBarSectionSize;
- (struct CGSize { double x0; double x1; })vipItemSize;
- (void).cxx_destruct;

@end
