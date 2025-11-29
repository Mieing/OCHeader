@class NSDictionary, AWELiveLocalLifeCardRawDataModel, NSString;

@interface AWELiveExpoundCardSchemaHandler : NSObject

@property (copy, nonatomic) NSDictionary *liveRoomParams;
@property (retain, nonatomic) AWELiveLocalLifeCardRawDataModel *cardInfo;
@property (nonatomic) long long serverTime;
@property (copy, nonatomic) NSString *goodsOrderSchema;
@property (copy, nonatomic) NSString *goodsDetailSchema;
@property (nonatomic) unsigned long long cardPosition;
@property (copy, nonatomic) id /* block */ isInSeckillStatus;
@property (copy, nonatomic) id /* block */ isWillSoldStatus;
@property (copy, nonatomic) id /* block */ isSoldOut;
@property (copy, nonatomic) id /* block */ isShowExclusivePrice;
@property (copy, nonatomic) NSDictionary *lynxSessionParams;

- (void)p_createGoodsDetailLynxSchemaAsync:(BOOL)a0;
- (void)p_createGoodsOrderSchemaAsync:(BOOL)a0;
- (id)preSetsParams;
- (id)commonLiveInfoParams;
- (id)localGoodsOrderParams;
- (id)localGoodsOrderEnterpriseTabExtraParams:(id)a0;
- (id)localGoodsDetailEnterpriseTabExtraParams:(id)a0;
- (id)schemaAddTraceSessionId:(id)a0 scene:(id)a1;
- (id)flashState;
- (id)getLiveInfo;
- (id)getlifeExtraInfoWithParams:(id)a0;
- (id)initWithCardInfo:(id)a0 cardPosition:(unsigned long long)a1 asyncCreateSchema:(BOOL)a2;
- (id)openGoodsOrderSchema;
- (id)goodsDetailLynxSchema;
- (id)goodsDetailWebSchema;
- (BOOL)goodsDetailSchemaIsPoiGoodsDetail;
- (void)updateFlashSaleServerTime:(long long)a0;
- (id)p_goodsDetailSessionParams;
- (id)themeparams;
- (void).cxx_destruct;

@end
