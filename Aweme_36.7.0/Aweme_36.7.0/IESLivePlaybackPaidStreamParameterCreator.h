@class HTSLiveEpisode, HTSEventContext;

@interface IESLivePlaybackPaidStreamParameterCreator : NSObject

@property (weak, nonatomic) HTSLiveEpisode *episode;
@property (readonly, weak, nonatomic) HTSEventContext *trackContext;

- (id)paidPanelParams:(long long)a0;
- (id)cameraPaidPanelParams:(id)a0;
- (id)paidPanelParams:(long long)a0 andEpisode:(id)a1;
- (id)initWithEpisode:(id)a0 trackContext:(id)a1;
- (id)paidPanelParams:(long long)a0 episode:(id)a1 source:(unsigned long long)a2;
- (id)livePaidPanelParams:(id)a0;
- (id)privilegeCameraPaidPanelParams:(id)a0 source:(unsigned long long)a1;
- (id)paidPanelCommonParams:(id)a0;
- (void).cxx_destruct;

@end
