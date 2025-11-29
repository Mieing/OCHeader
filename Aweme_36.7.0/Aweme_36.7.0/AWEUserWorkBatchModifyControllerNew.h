@class NSString;
@protocol AWEProfileGuidePopoverHelperProtocol, AWEProfileBatchModifyViewControllerProtocol;

@interface AWEUserWorkBatchModifyControllerNew : AWEUserWorkController <AWEProfileBatchModifyViewControllerDelegate, AWEUserWorkControllerBatchModifyProtocol, AWEUserWorkCollectionViewCellTabDelegate>

@property (nonatomic) long long cancelLikeCount;
@property (nonatomic) long long cancelFavoriteCount;
@property (retain, nonatomic) id<AWEProfileGuidePopoverHelperProtocol> popoverHelper;
@property (retain, nonatomic) id<AWEProfileBatchModifyViewControllerProtocol> batchModifyVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (BOOL)shouldShowLongPressBatchModify;
- (void)enterBatchModifyWithLongPressItem:(id)a0;
- (BOOL)shouldShowLongPressBatchCache;
- (void)enterBatchCacheWithLongPressItem:(id)a0;
- (void)showPopover:(id)a0;
- (void)showBatchModifyPopoverNewIfNeeded;
- (id)findFirstFullyVisibleIndexUIView;
- (void)didDeleteAllItems;
- (void)updateFavoriteCount:(id)a0 isRemoveFavorite:(BOOL)a1 isResetCount:(BOOL)a2;
- (BOOL)batchModify;
- (void)updateLikeCount:(id)a0 isRemoveFavorite:(BOOL)a1 isResetCount:(BOOL)a2;
- (void)reloadData;
- (void).cxx_destruct;
- (id)pageContext;
- (void)containerViewDidLoad;

@end
