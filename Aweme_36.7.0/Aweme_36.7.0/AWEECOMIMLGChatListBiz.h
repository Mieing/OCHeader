@class NSArray, NSMutableDictionary, AWEECOMIMNetworkImp, AWEECOMIMLGChatListBizDataSourceManager;

@interface AWEECOMIMLGChatListBiz : NSObject

@property (retain, nonatomic) AWEECOMIMNetworkImp *networkImp;
@property (copy) NSArray *cellModelList;
@property (retain) NSMutableDictionary *chatListAllServiceEntityInfoMap;
@property (retain) NSMutableDictionary *allServiceEntityCellModelMap;
@property (retain, nonatomic) AWEECOMIMLGChatListBizDataSourceManager *dataSourceManager;
@property (copy, nonatomic) id /* block */ cellListUpdateBlock;

- (void)updateInstantRetailShopInfo;
- (void)markConversationReadWithModel:(id)a0 completion:(id /* block */)a1;
- (void)deleteConversationWithCellModel:(id)a0 completion:(id /* block */)a1;
- (void)markAllConversationReadWithCompletion:(id /* block */)a0;
- (void)fetchAllConversationWithCompletion:(id /* block */)a0;
- (void)convertModelsOnDataSourceToUIModels:(id /* block */)a0;
- (void)conversationUIModelChange:(id)a0;
- (id)chatListServiceEntityInfoMapWithBizType:(id)a0;
- (void)setChatListServiceEntityInfoMap:(id)a0 bizType:(id)a1;
- (void)fetchServiceEntityInfosWithServiceEntityIDs:(id)a0 bizType:(id)a1 completion:(id /* block */)a2;
- (id)serviceEntityCellModelMapWithBizType:(id)a0;
- (id)convertDataModelToUIModel:(id)a0 chatListShopInfoMap:(id)a1;
- (void)setServiceEntityCellModelMap:(id)a0 bizType:(id)a1;
- (long long)realTotalUnreadCount;
- (void)notifyServerReadAll;
- (void)updateCellListModelWithServiceEntityInfo:(id)a0 bizType:(id)a1;
- (void)updateChatBoxData;
- (void)generateUIModelsWhenLoadWithCompletion:(id /* block */)a0;
- (id)sortCellModeListByTimeAndTop:(id)a0;
- (void)configConversationTopWithIsTop:(BOOL)a0 cellModel:(id)a1 completion:(id /* block */)a2;
- (void)configConversationMuteWithIsMute:(BOOL)a0 cellModel:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
