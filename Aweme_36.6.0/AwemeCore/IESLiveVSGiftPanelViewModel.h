@class IESLiveVSGiftSectionGiftTabItem, NSNumber, IESLiveVSGiftSectionGuestItem, NSString, IESLiveVSGiftPanelDataSharing, IESLiveVSGiftPanelCommonReactionCenter, NSMutableArray;

@interface IESLiveVSGiftPanelViewModel : NSObject <IESLiveWalletAction, IESLiveVSGiftPanelCommonReaction>

@property (retain, nonatomic) IESLiveVSGiftPanelCommonReactionCenter *reactionCenter;
@property (retain, nonatomic) IESLiveVSGiftPanelDataSharing *dataSharing;
@property (retain, nonatomic) IESLiveVSGiftSectionGuestItem *guestItem;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) IESLiveVSGiftSectionGiftTabItem *giftTabItem;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ itemDidUpdate;
@property (nonatomic) double containerWidth;
@property (nonatomic) unsigned long long openPageType;
@property (retain, nonatomic) NSNumber *openGiftID;
@property (copy, nonatomic) id /* block */ firstSelectGiftCompletion;
@property (nonatomic) BOOL isLandScapePanelV2Enable;
@property (nonatomic) BOOL isShowGiftTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)diamondHasUpdated;
- (id)initWithDataSharing:(id)a0 reactionCenter:(id)a1 containerWidth:(double)a2;
- (void)giftPanelWillDismiss;
- (void)p_updateDataWithFirstTag:(BOOL)a0;
- (void)p_buildItemsWithStyle:(long long)a0;
- (void)tr_removeGiftPanel;
- (void)p_updateGiftListWithFirstTag:(BOOL)a0;
- (void)p_updateDiamond;
- (id)p_displayGiftPagesFrom:(id)a0;
- (void)p_updateGiftListForceWithFirstTag:(BOOL)a0;
- (void)p_updateWithDisplayGiftPages:(id)a0 firstTag:(BOOL)a1;
- (void)p_selectGiftWithGiftID:(id)a0 success:(BOOL *)a1;
- (void)p_loadLastSelectedGift;
- (void)tr_showGiftPanel;
- (id)p_lastSelectedGiftID;
- (void)p_storeSelectedGiftID:(id)a0;
- (void)p_selectPage:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)loadData;
- (void)buildItems;

@end
