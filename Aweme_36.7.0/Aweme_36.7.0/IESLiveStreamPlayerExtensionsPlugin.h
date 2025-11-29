@class NSString, IESLivePlayerSceneStallMonitor;
@protocol IESLiveStreamDecorationViewManagerProtocol, HTSLiveStreamPictureExtensionProvider;

@interface IESLiveStreamPlayerExtensionsPlugin : IESLiveStreamPlayerBasePlugin <HTSLiveStreamPictureExtensionDelegate, IESLiveStreamPlayerExtensionsPluginProtocol>

@property (retain, nonatomic) id<HTSLiveStreamPictureExtensionProvider> streamPictureExtensionProvider;
@property (retain, nonatomic) id<IESLiveStreamDecorationViewManagerProtocol> streamDecorationViewProvider;
@property (retain, nonatomic) IESLivePlayerSceneStallMonitor *stallMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)didSetAttachingDIContext;
- (id)liveRoomModel;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (void)playerFrozen:(id)a0;
- (void)playerResume:(id)a0;
- (void)pe_viewWillAppear;
- (void)pe_prepareForReuse;
- (void).cxx_destruct;

@end
