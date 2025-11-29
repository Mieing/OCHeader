@class IESLiveAnchorPerfTrackImpl;

@interface IESLiveAnchorPerfTrackPlugin : IESLiveAnchorBizPlugin

@property (retain, nonatomic) IESLiveAnchorPerfTrackImpl *anchorPerfTrack;

+ (BOOL)pluginShouldActive;

- (id)startLiveType;
- (id)subscribeMessages;
- (void)handleComponentBootCompletion;
- (void)handleComponentFirstFrameDidStartLoad;
- (void)handleComponentFirstFrameDidFinish;
- (void)handleAnchorLiveWillClose;
- (void).cxx_destruct;
- (void)setup;

@end
