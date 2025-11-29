@interface IESLLPOIGoodsDetailShareParamsHandler : NSObject

+ (id /* block */)prepareShareCompletionWithBridgeCallback:(id /* block */)a0;
+ (void)shareWithNavigationBarVM:(id)a0;
+ (void)shareWithDeliveryMenuBarVM:(id)a0;
+ (id)appendUrlDictWithInfo:(id)a0;
+ (id)parseTokenUrlWithParams:(id)a0 commandShareParams:(id)a1 appendUrlDict:(id)a2 clientLifeShareExt:(id)a3;
+ (id)handleIMWithIMExtra:(id)a0 lifeShareExt:(id)a1 commonTrackParams:(id)a2;
+ (id)replaceShareUrl:(id)a0 withClientParams:(id)a1;
+ (void)shareWithJSBParamModel:(id)a0 completionHandler:(id /* block */)a1;

@end
