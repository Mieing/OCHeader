@class IESLiveAudienceContainerContext;

@interface IESLiveAudienceGamePlugin : IESLiveAudiencePlugin

@property (retain, nonatomic) IESLiveAudienceContainerContext *context;

- (void)reuseWithContext:(id)a0;
- (void)didEnterRoom:(id)a0;
- (void)updateTrackGameAnchorInfo;
- (void).cxx_destruct;
- (void)initWithContext:(id)a0;

@end
