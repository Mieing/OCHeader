@class NSArray, NSString, AWEECOMIMBaseMsgModel, AWEECOMIMNetworkImp;

@interface AWEECOMIMMsgForwardBiz : NSObject

@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *shopCellModels;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *encodeShopID;
@property (retain, nonatomic) NSArray *friendsCellModels;
@property (retain, nonatomic) AWEECOMIMBaseMsgModel *messageModel;
@property (retain, nonatomic) AWEECOMIMNetworkImp *networkImp;
@property (copy, nonatomic) id /* block */ reloadDataBlock;

- (id)bizType;
- (unsigned long long)forwardMsgType;
- (id)initWithMessageModel:(id)a0 encodeShopID:(id)a1;
- (void)p_loadToLocal;
- (long long)p_inbox;
- (void)p_loadShopInfoWithShopIds:(id)a0;
- (void)p_createUIModelsWithSearchText:(id)a0;
- (id)p_createShareToFriendsExtraWithParams:(id)a0;
- (id)sendMsgParamsDictWithConversation:(id)a0;
- (id)p_getSearchResultsWithSearchText:(id)a0 cellModels:(id)a1;
- (void)forwardToFriend:(id)a0 completion:(id /* block */)a1;
- (void)forwardToShopV2:(id)a0 completion:(id /* block */)a1;
- (void)p_getShareGoodsModelWithParams:(id)a0 toShopID:(id)a1 completion:(id /* block */)a2;
- (void)p_sendImageToFriend:(id)a0 completion:(id /* block */)a1;
- (void)p_sendVideoToFriend:(id)a0 completion:(id /* block */)a1;
- (void)searchText:(id)a0;
- (void)leaveMessage:(id)a0 cellModel:(id)a1;
- (void)forwardMessage:(id)a0 completion:(id /* block */)a1;
- (void)forwardToShop:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)fetchData;

@end
