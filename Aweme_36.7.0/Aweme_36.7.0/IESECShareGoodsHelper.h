@class NSString;

@interface IESECShareGoodsHelper : NSObject <IESECShareGoods>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)shareGoodsWithAdditions:(id)a0 shopID:(id)a1 shareModel:(id)a2 shareOnVC:(id)a3;
+ (id)tokenSchemaWithShareModel:(id)a0 additions:(id)a1 metaParams:(id)a2 ecomShareTrackParams:(id)a3;
+ (id)chatGoodsSchemaWithShareModel:(id)a0 additions:(id)a1 metaParams:(id)a2 ecomShareTrackParams:(id)a3;
+ (id)generateDetailSchemaParams:(id)a0 additions:(id)a1 metaParams:(id)a2 ecomShareTrackParams:(id)a3;
+ (id)schemaExtraParamsWithAdditions:(id)a0 shopID:(id)a1 shareModel:(id)a2 ecomShareTrackParams:(id)a3;
+ (id)generateGoodsBeforeShareCacheKeyWithItemId:(id)a0 marketChannel:(id)a1 channelId:(id)a2 channelType:(long long)a3;
+ (id)updateTokenSchemaWithShareID:(id)a0;
+ (void)updateQRSchemaWithShareID:(id)a0;
+ (void)updateShareModelEcomShareTrackParams:(id)a0;
+ (void)shareSchemaReportWithInSchema:(id)a0 outSchema:(id)a1;
+ (void)updateDetailSchemaWithShareID:(id)a0;
+ (id)updateIMNativeCardSchemaWithShareModel:(id)a0;
+ (BOOL)needUseCache:(id)a0;
+ (void)reportBeforeShareCache:(BOOL)a0;
+ (BOOL)shouldNotWriteCache:(id)a0;
+ (void)getContactInfoWithCompletion:(id /* block */)a0;
+ (void)shareGoodsParams:(id)a0 additions:(id)a1 onVC:(id)a2;
+ (void)shareGoods:(id)a0 itemID:(id)a1 KOLID:(id)a2 additions:(id)a3 onVC:(id)a4;
+ (BOOL)allowShareGoodsWithPromotionID:(id)a0 promotionSource:(long long)a1;
+ (void)reportGoodsWithParams:(id)a0;


@end
