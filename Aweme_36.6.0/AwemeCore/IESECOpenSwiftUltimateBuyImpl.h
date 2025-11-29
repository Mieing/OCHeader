@class NSString;

@interface IESECOpenSwiftUltimateBuyImpl : NSObject <IESECOpenSwiftUltimateBuy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openWithSchemaModel:(id)a0 fromVC:(id)a1 completion:(id /* block */)a2;
+ (BOOL)checkCacheValidWithPromotionID:(id)a0 productID:(id)a1 sceneType:(id)a2 firstSpecId:(id)a3;
+ (void)saveCacheWithResponse:(id)a0 promotionID:(id)a1 productID:(id)a2 sceneType:(id)a3 firstSpecId:(id)a4;


@end
