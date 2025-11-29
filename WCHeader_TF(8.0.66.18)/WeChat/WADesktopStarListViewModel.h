@class WAAppItemData;
@protocol WADesktopStarListDelegate;

@interface WADesktopStarListViewModel : WAMyStarListViewModel {
    long long _moveStartIndex;
    long long _moveEndIndex;
    WAAppItemData *_itemData;
}

@property (weak, nonatomic) id<WADesktopStarListDelegate> listDelegate;

- (void)notifyEditMode:(BOOL)a0;
- (void)onItemDeleted:(id)a0 index:(long long)a1;
- (void)onItemStared:(id)a0 index:(long long)a1;
- (void)onItemMoveFrom:(id)a0 fromIndex:(long long)a1 to:(long long)a2;
- (void)reportOnViewDidAppear;
- (void).cxx_destruct;

@end
