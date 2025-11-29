@class AWEECOMIMTopNotifyDataSource, NSArray, NSMutableDictionary, NSDictionary, AWEECOMIMNetworkImp, AWEECOMIMChatListBizDataSourceManager, NSObject;
@protocol OS_dispatch_queue, AWEECOMIMPaasKVStoreProtocol;

@interface AWEECOMIMChatListBiz : NSObject

@property (retain, nonatomic) AWEECOMIMNetworkImp *networkImp;
@property (copy) NSArray *cellModelList;
@property (retain) NSMutableDictionary *chatListAllServiceEntityInfoMap;
@property (retain) NSMutableDictionary *allServiceEntityCellModelMap;
@property (retain, nonatomic) AWEECOMIMChatListBizDataSourceManager *dataSourceManager;
@property (retain, nonatomic) id<AWEECOMIMPaasKVStoreProtocol> kvStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cellModelGenQueue;
@property (retain, nonatomic) AWEECOMIMTopNotifyDataSource *topNotifyDataSource;
@property (nonatomic) BOOL disableTopNotifyInfo;
@property (copy, nonatomic) id /* block */ cellListUpdateBlock;
@property (copy, nonatomic) id /* block */ firstFetchResultBlock;
@property (copy, nonatomic) id /* block */ showAuthorPrivateAlert;
@property (copy, nonatomic) NSDictionary *requestCommonParams;

+ (id)clearUnreadCountParamsWithType:(id)a0 cellModel:(id)a1 fromSource:(id)a2 encodedShopID:(id)a3 authorID:(id)a4;
+ (void)notifyServerReadAll;
+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;

- (unsigned long long)totalUnreadCountForDisplay;
- (void)updateInstantRetailShopInfo;
- (void)fetchSchemaURLWithParams:(id)a0 completion:(id /* block */)a1;
- (void)notifyServerMessageExposureWithExtParams:(id)a0;
- (id)initWithChatListBizConfig:(id)a0;
- (void)fetchIMChatListConfigWithCompletion:(id /* block */)a0;
- (void)markAsReadToNoticeServer;
- (unsigned long long)totalUnreadCountForDisplayWithConvType:(long long)a0;
- (void)fetchChatListTitleBarIconWithCompletion:(id /* block */)a0;
- (void)markConversationReadWithModel:(id)a0 completion:(id /* block */)a1;
- (void)deleteConversationWithCellModel:(id)a0 completion:(id /* block */)a1;
- (void)configCoversationTopWithIsTop:(BOOL)a0 cellModel:(id)a1 completion:(id /* block */)a2;
- (void)configCoversationMuteWithIsMute:(BOOL)a0 cellModel:(id)a1 completion:(id /* block */)a2;
- (void)markAllConversationReadWithCompletion:(id /* block */)a0;
- (void)fetchAllConversationAndTopNotifyInfoWithCompletion:(id /* block */)a0;
- (void)fetchAllConversationWithCompletion:(id /* block */)a0;
- (void)fetchIMTopNotifyInfoWithCompletion:(id /* block */)a0;
- (void)createTopNotifyDataSource;
- (void)convertModelsOnDataSourceToUIModels:(id /* block */)a0;
- (void)conversationUIModelChange:(id)a0;
- (id)chatListServiceEntityInfoMapWithBizType:(id)a0;
- (void)setChatListServiceEntityInfoMap:(id)a0 bizType:(id)a1;
- (void)fetchServiceEntityInfosWithServiceEntityIDs:(id)a0 bizType:(id)a1 completion:(id /* block */)a2;
- (void)generateUIModelsWhenLoadWithCompletion:(id /* block */)a0 reason:(unsigned long long)a1;
- (void)notifyServerMessageExposure;
- (BOOL)isWithin14days:(double)a0;
- (void)syncConvToFTSWithCellModelList:(id)a0;
- (id)serviceEntityCellModelMapWithBizType:(id)a0;
- (id)convertDataModelToUIModel:(id)a0 chatListShopInfoMap:(id)a1;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (BOOL)isBeyondXDay:(id)a0;
- (id)sortCellModeListByTime:(id)a0;
- (BOOL)displayChatBoxNoticeAsRedDot;
- (id)msgUnreadWithinDaysTextFromCache;
- (void)setServiceEntityCellModelMap:(id)a0 bizType:(id)a1;
- (long long)msgUnreadCountWithinDaysFromCache;
- (id)titleBarIconModelWithDict:(id)a0 isFromSubTools:(BOOL)a1;
- (long long)realTotalUnreadCount;
- (void)updateCellListModelWithServiceEntityInfo:(id)a0 bizType:(id)a1;
- (long long)msgUnreadCountWithinDaysDefault;
- (void)cacheMsgUnreadCountWithinDays:(id)a0;
- (void)updateChatBoxData;
- (id)sortCellModeListByIsOnTop:(id)a0;
- (void).cxx_destruct;

@end
