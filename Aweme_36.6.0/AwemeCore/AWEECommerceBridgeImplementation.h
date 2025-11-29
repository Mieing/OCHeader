@interface AWEECommerceBridgeImplementation : NSObject

+ (void)openTaobaoURL:(id)a0 completion:(id /* block */)a1;
+ (void)openPostPannelWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)publishEventPostCommentResponseWithParams:(id)a0;
+ (void)openVideoEditVCWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)sendAdLogV1WithParams:(id)a0;
+ (void)openTaobaoGoodsWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)updateGoodsInfoWithParams:(id)a0;
+ (id)addGoodsDraftWithParams:(id)a0;
+ (id)didAddGoodsWithParams:(id)a0;
+ (void)jumpToTaobaoForBindTaobaoKe:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (void)openTaoBaoRelationPageWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)checkLegalDisclaimer:(id)a0 completion:(id /* block */)a1;
+ (void)payWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)ttpayWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)launchWXMiniProWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)galleryWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)downloadMediaAndOpenPostPannelWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)downloadMediaAndOpenVideoEditVCWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)getCjInfoWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)chooseMediaWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)uploadFileWithParams:(id)a0 completion:(id /* block */)a1;

@end
