@class IESECGoodsDetailHeaderServiceProvider;
@protocol IESECGoodsDetailHeaderTrackerService, IESECGoodsDetailHeaderEventHandlerService;

@interface IESECPdpHeaderSliceEventHandler : IESECGoodsDetailSliceXEventHandler

@property (weak, nonatomic) IESECGoodsDetailHeaderServiceProvider *headerServiceProvider;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderEventHandlerService> handler;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderTrackerService> trackerImpl;

- (void)triggerHeadScrollToIndexWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerHeadJumpWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerHeadTrackWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerHeadPreviewWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerHeadMoreVideoWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void)triggerHeadFeedbackWithAction:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
