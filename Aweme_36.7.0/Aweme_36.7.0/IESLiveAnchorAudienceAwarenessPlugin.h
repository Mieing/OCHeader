@protocol IESLiveAudienceRoomAwareness;

@interface IESLiveAnchorAudienceAwarenessPlugin : IESLiveAnchorBizPlugin

@property (retain, nonatomic) id<IESLiveAudienceRoomAwareness> audienceAwareness;

- (void)liveRoomDidAppear;
- (void)liveRoomDidDisappear;
- (void).cxx_destruct;

@end
