@class NSArray, NSString, IESLiveVSGiftPanelDataSharing, GiftPage, IESLiveVSGiftPanelCommonReactionCenter;

@interface IESLiveVSGiftSectionGiftTabItem : IESLiveDynamicModel <IESLiveVSGiftPanelCommonReaction, IESLiveVSGiftSectionItem>

@property (retain, nonatomic) GiftPage *currentPage;
@property (retain, nonatomic) NSArray *giftPages;
@property (readonly, nonatomic) unsigned long long currentPageIndex;
@property (nonatomic) BOOL isShowGiftTab;
@property (copy, nonatomic) id /* block */ giftPagesDidUpdate;
@property (copy, nonatomic) id /* block */ currentPageDidUpdate;
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
- (void)changeCurrentTabWithIndex:(unsigned long long)a0;
- (void)updateWithGiftPages:(id)a0;
- (void)changePageContainsGiftID:(id)a0;
- (void)selectPage:(id)a0;
- (BOOL)isEqualToDiffableItem:(id)a0;
- (void)tapPage:(id)a0;
- (id)p_defaultPages;
- (void)p_changeCurrentPage:(id)a0 fromScroll:(BOOL)a1;
- (void)tr_tapPage:(id)a0 fromTap:(BOOL)a1;
- (void).cxx_destruct;

@end
