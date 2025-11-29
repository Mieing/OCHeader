@interface AWEEcomSearchMerchandiseNativeInteractListController : AWEEcomSearchMerchandiseCardListController

- (void)trackSearchResultClick:(id)a0;
- (void)collectionView:(id)a0 didSelectItemWithModel:(id)a1 atIndexPath:(id)a2;
- (id)bcmPassThroughParams;
- (id)bcmKey;
- (void)jumpToMerchandiseWithModel:(id)a0 atIndexPath:(id)a1;
- (void)jumpToFeedBoxBannerPage:(id)a0;
- (BOOL)enableETrackWithModel:(id)a0;
- (void)merchandiseClickProductTrack:(id)a0 atIndexPath:(id)a1;
- (void)adjustAwemeShowedBefore:(id)a0;
- (void)jumpToAwemeMerchandiseWithModel:(id)a0 atIndexPath:(id)a1;
- (void)jumpToLiveRoomWithModel:(id)a0 shouldShowGoods:(BOOL)a1 indexPath:(id)a2;
- (void)jumpToImageAlbumWithModel:(id)a0 atIndexPath:(id)a1;
- (void)jumpToAladdinBannerWithModel:(id)a0 atIndexPath:(id)a1;
- (void)jumpToMarketGoodsWithModel:(id)a0 atIndexPath:(id)a1;
- (void)addAutoPlayToSearchResultParams:(id)a0 indexPath:(id)a1;
- (void)jumpToInnerAwemeWithModel:(id)a0 shouldShowGoods:(BOOL)a1 indexPath:(id)a2 btm:(id)a3;
- (void)trackFeedEnter:(id)a0;
- (void)trackClickProductPicture:(id)a0;
- (void)jumpToAwemeMerchandiseWithModel:(id)a0 cell:(id)a1;

@end
