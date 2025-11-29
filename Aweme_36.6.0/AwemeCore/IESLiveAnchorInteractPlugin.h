@class IESLiveInteractServiceImpl;

@interface IESLiveAnchorInteractPlugin : IESLiveAnchorBizPlugin

@property (retain, nonatomic) IESLiveInteractServiceImpl *interactService;

- (void).cxx_destruct;
- (void)setup;

@end
