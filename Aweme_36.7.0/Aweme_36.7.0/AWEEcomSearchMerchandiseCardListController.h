@class NSString;

@interface AWEEcomSearchMerchandiseCardListController : AWEEcomSearchListBaseController <AWEEcommerceSearchCellContextProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)removeModel:(id)a0;
- (id)filterManager;
- (void)refreshResultWithIsFromSelectBoard:(BOOL)a0 trackParams:(id)a1;
- (void)slideToTabWithTabType:(id)a0 enterMethod:(id)a1 extra:(id)a2;
- (BOOL)productMagnifyTransitionForIndexPath:(id)a0 cell:(id)a1 schemaParams:(id)a2;
- (void)p_endAutoPlay;
- (void)p_beginAutoPlayWithReset:(BOOL)a0;
- (void)p_holdAutoPlayForReload;
- (void)recordPreviousVisibleIndexPaths;
- (void)willEnterFullScreen:(long long)a0 model:(id)a1;
- (void)reloadCurrentCell:(long long)a0 model:(id)a1 needTrackShow:(BOOL)a2;
- (void)forceBecomeActive:(long long)a0 model:(id)a1;
- (id)videoFeedScrollView;
- (void)scrollToDisplayItemWithOffset:(double)a0 index:(long long)a1 animated:(BOOL)a2;
- (void)jumpToVideoDetailTableView:(long long)a0 model:(id)a1 params:(id)a2;
- (BOOL)removeCellOfModel:(id)a0 animated:(BOOL)a1;
- (void)updateHeightForCell:(long long)a0 model:(id)a1;
- (void)updateHeightForCommonCell:(long long)a0 model:(id)a1;
- (void)updateComponentModel:(id)a0 isSelect:(BOOL)a1;
- (void)updateBusinessInfo:(id)a0 isSelect:(BOOL)a1 dataID:(id)a2;
- (void)updateExtraInfo:(id)a0;
- (id)getCurrentStateForIndex:(long long)a0 model:(id)a1;
- (void)jumpToUserWindowLiveRoomWithModel:(id)a0 logExtraDict:(id)a1;
- (void)recalculateToAutoPlay;
- (void)updateQuery:(id)a0;
- (id)srp;

@end
