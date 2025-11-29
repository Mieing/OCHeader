@interface IESECGoodsDetailHeadViewEventHandler : IESECGoodsDetailEventHandler

+ (id)eventComponentID;

- (void)scrollToComment;
- (void)handleEventWithEventID:(id)a0 trackParams:(id)a1 businessParams:(id)a2 completion:(id /* block */)a3;
- (void)scrollToGYL;
- (void)scrollToProduct;
- (void)scrollToDetail;
- (void)tapImageV2;
- (void)tapPdpHeadPreview;
- (BOOL)usePDPPreviewVC:(id)a0;
- (void)configPreviewVCWithResult:(id)a0;
- (void)trackClickTabScrollAction;

@end
