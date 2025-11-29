@interface IESECGoodsDetailLiveReplayFloatEntryEventHandler : IESECGoodsDetailEventHandler

+ (id)eventComponentID;

- (void)trackShow;
- (void)trackClose;
- (void)openLiveRoom;
- (void)handleEventWithEventID:(id)a0 trackParams:(id)a1 businessParams:(id)a2 completion:(id /* block */)a3;
- (void)openReplayPage;
- (void)openHeadMoreVideosPreviewVC;
- (void)trackHeadMoreVideoShow;

@end
