@class NSString, TabItem, IESLiveFeedDrawRoomItemModel;

@interface IESLiveFeedDrawerRoomSectionController : IESLiveFeedDrawerListItemSectionController <IGListDisplayDelegate, IGListDiffable> {
    TabItem *_tabConfig;
}

@property (retain, nonatomic) IESLiveFeedDrawRoomItemModel *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)tabConfig;
- (void)setTabConfig:(id)a0;
- (void)refreshLayout:(BOOL)a0;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)didUpdateToObject:(id)a0;
- (void)trackCellWillShow;
- (void).cxx_destruct;
- (id)init;
- (id)currentItem;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
