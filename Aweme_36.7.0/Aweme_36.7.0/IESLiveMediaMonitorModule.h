@class IESLiveMediaContainerContext, IESLiveAnchorPerfTrackImpl;

@interface IESLiveMediaMonitorModule : IESLiveMediaExecutionBaseModule

@property (retain, nonatomic) IESLiveMediaContainerContext *containerContext;
@property (retain, nonatomic) IESLiveAnchorPerfTrackImpl *anchorPerfTrack;

- (id)startLiveType;
- (id)logLiveType;
- (void)subscribeExecutionMessage;
- (void)initialize:(id)a0 params:(id)a1;
- (void)startNormalLive;
- (void)willCloseRoom;
- (void)didCloseRoom:(id)a0;
- (void)componentFirstFrameDidFinish:(double)a0;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
