@interface IESECRelationGoodsCardHelper : NSObject

+ (id)getGoodsDetailShowRequestWithGoodsModel:(id)a0 viewController:(id)a1 additionalParamsDict:(id)a2 isHalfMode:(BOOL)a3;
+ (void)handleWithGoodsDetailShowRequest:(id)a0 completion:(id /* block */)a1;
+ (void)jumpToGoodsDetailBySchemaWithGoodsModel:(id)a0 paramsDict:(id)a1 sourceBtmToken:(id)a2 completion:(id /* block */)a3;

@end
