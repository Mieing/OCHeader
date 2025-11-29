@class IESLiveAudienceRoomBaseConfig, IESLiveAudienceStreamGuarder, HTSLive4LayerContainerView, IESLiveEnterRoomAisle, NSString, IESLiveAudienceWatchTimeGuarder, IESLiveAudienceCoreMonitor, UIViewController, IESLiveAudienceComponentLoader, IESLiveAudienceRoomStateGuarder, IESLiveExitRoomContext;
@protocol IESLiveMessageActionCreatorProtocol, IESLiveAudienceContainerProtocol, HTSLivePluginLayoutMachineProvider, IESLiveRoomNavigationService, IESLivePayWallFreeTrialProvider;

@interface IESLiveAudienceContainerContext : NSObject

@property (weak, nonatomic) IESLiveAudienceRoomStateGuarder *roomGuarder;
@property (weak, nonatomic) IESLiveAudienceStreamGuarder *streamGuarder;
@property (weak, nonatomic) IESLiveAudienceComponentLoader *componentLoader;
@property (weak, nonatomic) IESLiveAudienceWatchTimeGuarder *watchTimeGuarder;
@property (weak, nonatomic) UIViewController<IESLiveAudienceContainerProtocol> *containerVC;
@property (retain, nonatomic) IESLiveExitRoomContext *exitRoomContext;
@property (weak, nonatomic) IESLiveAudienceRoomBaseConfig *baseConfig;
@property (weak, nonatomic) id<IESLiveMessageActionCreatorProtocol> messageActionCreator;
@property (weak, nonatomic) HTSLive4LayerContainerView *containerView;
@property (retain, nonatomic) id<HTSLivePluginLayoutMachineProvider> pluginLayoutMachine;
@property (weak, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (nonatomic) BOOL didLoadComponents;
@property (weak, nonatomic) id<IESLivePayWallFreeTrialProvider> trialGuarder;
@property (retain, nonatomic) id<IESLiveRoomNavigationService> navigationMananger;
@property (copy, nonatomic) NSString *preSetJumpSchema;
@property (weak, nonatomic) IESLiveAudienceCoreMonitor *roomMonitor;
@property (readonly, nonatomic) BOOL isInMseq;
@property (readonly, nonatomic) BOOL isInOffcialMseq;

- (id)componentContext;
- (id)roomDI;
- (id)enterContext;
- (void).cxx_destruct;
- (id)pageContext;

@end
