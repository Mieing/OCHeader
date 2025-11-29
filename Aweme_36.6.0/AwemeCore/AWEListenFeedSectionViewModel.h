@interface AWEListenFeedSectionViewModel : AWEBaseListSectionViewModel

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (id)awemeModelWithIndex:(long long)a0;
- (void)handleFollowedNotification:(id)a0;
- (void)handleUnFollowedNotification:(id)a0;
- (long long)indexWithItemID:(id)a0;
- (void)updateLocalFollowState:(BOOL)a0 ofAuthor:(id)a1;
- (id)cellViewModelWithIndex:(long long)a0;
- (long long)indexWithCellModel:(id)a0;
- (id)init;

@end
