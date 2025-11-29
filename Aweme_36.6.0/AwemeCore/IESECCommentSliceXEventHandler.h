@class NSString, IESECGoodsCommentContext;

@interface IESECCommentSliceXEventHandler : NSObject <IESECSliceXEventForwardDelegate>

@property (retain, nonatomic) IESECGoodsCommentContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerSliceXEvent:(id)a0;
- (void)handleSliceAction:(id)a0 activeView:(id)a1;
- (void)triggerAlertWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)setCommentReplyCountWithSliceId:(id)a0 count:(id)a1;
- (void)triggerSliceXEventWithName:(id)a0 triggerParams:(id)a1 activeView:(id)a2;
- (void)triggerOpenReplyPanelWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerOpenSheetPanelWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (BOOL)autoHandleSliceXEvent:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)handleSliceAction:(id)a0 activeView:(id)a1 path:(id)a2;
- (void)reportStateWithAction:(id)a0 info:(id)a1;
- (void)reportErrWithAction:(id)a0 errCode:(long long)a1 message:(id)a2;
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
