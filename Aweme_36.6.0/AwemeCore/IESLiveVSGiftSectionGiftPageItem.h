@class IESLiveVSGiftItem, NSArray, NSString, IESLiveVSGiftGuestModel, IESLiveVSGiftPanelDataSharing, IESLiveVSGiftPanelCommonReactionCenter;

@interface IESLiveVSGiftSectionGiftPageItem : IESLiveDynamicModel <IESLiveVSGiftPanelCommonReaction, IESLiveVSGiftSectionItem>

@property (retain, nonatomic) NSArray *giftListItems;
@property (retain, nonatomic) IESLiveVSGiftItem *currentSelectedItem;
@property (retain, nonatomic) IESLiveVSGiftGuestModel *guestModel;
@property (copy, nonatomic) id /* block */ giftListItemsDidUpdate;
@property (copy, nonatomic) id /* block */ scrollGiftPageWithIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (retain, nonatomic) Class cellClass;
@property (retain, nonatomic) IESLiveVSGiftPanelDataSharing *dataSharing;
@property (retain, nonatomic) IESLiveVSGiftPanelCommonReactionCenter *reactionCenter;

- (id)diffIdentifier;
- (id)initWithDataSharing:(id)a0 withReactionCenter:(id)a1;
- (void)currentSelectedItemChanged:(id)a0;
- (void)guestInfoDidUpdate:(id)a0;
- (void)scrollToGiftPageWithIndex:(unsigned long long)a0;
- (void)updateWithGiftPages:(id)a0;
- (void)selectGiftWithGiftID:(id)a0 success:(BOOL *)a1;
- (BOOL)isEqualToDiffableItem:(id)a0;
- (void).cxx_destruct;
- (double)bottomOffset;

@end
