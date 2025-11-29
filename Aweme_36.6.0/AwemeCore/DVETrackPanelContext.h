@protocol IESServiceRegister, DVEEditingRuntimeProtocol, IESServiceProvider, DVECoreActionServiceProtocol, DVEPlayerServiceProtocol, DVEAccessibilityProtocol;

@interface DVETrackPanelContext : NSObject

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<IESServiceRegister> serviceContainer;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (weak, nonatomic) id<DVEAccessibilityProtocol> accessibilityService;

- (id)initWithProvider:(id)a0 container:(id)a1;
- (void).cxx_destruct;

@end
