@class IESECGoodsCommentContext;

@interface IESECCommentSliceXEventHandler : IESECPDPBaseEventHandler

@property (retain, nonatomic) IESECGoodsCommentContext *context;

- (void)triggerAlertWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)setCommentReplyCountWithSliceId:(id)a0 count:(id)a1;
- (void)triggerOpenReplyPanelWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerOpenSheetPanelWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)reportErrWithAction:(id)a0 errCode:(long long)a1 message:(id)a2;
- (void)reportStateWithAction:(id)a0 info:(id)a1;
- (void)triggerOpenSchemaWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerStoreUpdateWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerSliceUpdateWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerEnterBigPicWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerTrackerWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerFetchWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerFetchCommentWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerExpandAnimWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerToastWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerRefreshWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerEnterMeaninglessPageWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerEnterProductDetailWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
