@class NSString, NSDictionary, IESLLLiveCardRawDataModel, IESLLLiveShelfCardListItem;

@interface IESLLLiveOrderSchemaHandler : NSObject

@property (copy, nonatomic) NSString *goodsOrderSchema;
@property (copy, nonatomic) NSDictionary *liveRoomParams;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSDictionary *queryParams;
@property (copy, nonatomic) NSDictionary *liveInfo;
@property (copy, nonatomic) NSDictionary *sessionParams;
@property (copy, nonatomic) NSDictionary *lynxPassParams;
@property (retain, nonatomic) IESLLLiveCardRawDataModel *expoundCardInfo;
@property (retain, nonatomic) IESLLLiveShelfCardListItem *cardListItem;
@property (nonatomic) long long fromPosition;
@property (nonatomic) BOOL fromPreview;

+ (id)sharedInstance;

- (void)preloadTradeConfirmWithMainUrl:(id)a0;
- (id)createGoodsOrderSchemaWithExpoundCardInfo:(id)a0 fromPreview:(BOOL)a1 params:(id)a2 liveInfo:(id)a3 lynxPassParams:(id)a4;
- (id)orderQueryParamsFromClientWithShelfCardItem:(id)a0 expoundCardItem:(id)a1 fromPreview:(BOOL)a2 liveRoomInfo:(id)a3 params:(id)a4 liveInfo:(id)a5 lynxPassParams:(id)a6;
- (void)saveGoodOrderBasicParamsWithFromPosition:(long long)a0 shelfCardItem:(id)a1 expoundCardItem:(id)a2 liveRoomInfo:(id)a3 extraParams:(id)a4 liveInfo:(id)a5 lynxPassParams:(id)a6;
- (id)p_queryParams;
- (id)p_localGoodsOrderParams;
- (id)p_commonLiveInfoParamsWithBlock:(id /* block */)a0;
- (id)p_joinParamsToEnterpriseTabExtra;
- (id)p_generatePOISession;
- (void)p_saveLocalDataForConfirmAdEvent;
- (id)p_generateShelfItemSession;
- (id)p_generateExpoundCardSession;
- (id)getLifeExtraInfoWithParams:(id)a0;
- (id)p_localGoodsOrderEnterpriseTabExtraParams:(id)a0;
- (id)p_localGoodsOrderEnterpriseTabExtraParamsForShelfItem;
- (id)p_localGoodsOrderEnterpriseTabExtraParamsForExpoundCard;
- (id)flashStateForExpoundCard;
- (id)p_getLocalDataForConfirmAdEvent;
- (id)createGoodsOrderSchemaWithItem:(id)a0 fromPreview:(BOOL)a1 liveRoomInfo:(id)a2 params:(id)a3 liveInfo:(id)a4 lynxPassParams:(id)a5;
- (void).cxx_destruct;
- (id)init;

@end
