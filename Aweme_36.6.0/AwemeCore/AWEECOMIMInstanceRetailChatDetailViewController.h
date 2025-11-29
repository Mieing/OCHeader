@interface AWEECOMIMInstanceRetailChatDetailViewController : AWEECOMIMChatDetailViewController

- (id)requestCommonParams;
- (void)registerMsgCells;
- (id)btmPageID;
- (void)sendGoodsCardWithItemModel:(id)a0;
- (void)sendGoodsCardWithItemModel:(id)a0 completion:(id /* block */)a1;
- (void)sendOrderCardWithItemModel:(id)a0;
- (void)sendOrderCardWithItemModel:(id)a0 completion:(id /* block */)a1;
- (id)pagePigeonBizType;
- (BOOL)canSendUserEnterFromGoodsOrOrder;
- (id)pageNameForPerformanceTracker;
- (long long)pageInbox;
- (BOOL)fetchNeedRefreshMsgCellAvatarAndRefreshShopInfoWithShopId:(id)a0;
- (id)serviceType;
- (void)viewDidLoad;
- (id)pageName;

@end
