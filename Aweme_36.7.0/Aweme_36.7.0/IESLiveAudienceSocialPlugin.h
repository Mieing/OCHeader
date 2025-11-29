@class IESLiveAudienceContainerContext, IESLiveInteractServiceImpl;

@interface IESLiveAudienceSocialPlugin : IESLiveAudiencePlugin

@property (retain, nonatomic) IESLiveAudienceContainerContext *context;
@property (retain, nonatomic) IESLiveInteractServiceImpl *interactService;

- (void)reuseWithContext:(id)a0;
- (void)didLoadRoomWithReuseFlag:(BOOL)a0;
- (void).cxx_destruct;
- (void)initWithContext:(id)a0;

@end
