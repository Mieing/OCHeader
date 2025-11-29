@class NSString, HTSLiveCommonCardArea;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppActionsPlugin : NSObject <IESLiveNativeAppActionsPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveAnchorRoomStatusChangeEvents, IESLiveNativeAppPluginDataStreamHandler, IESLiveTopRightCardAction> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (retain, nonatomic) HTSLiveCommonCardArea *importantCardArea;
@property (retain, nonatomic) HTSLiveCommonCardArea *waittingShowImportantCardArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (void)willStopAnchorLive;
- (void)topRightCardData:(id)a0;
- (void)topRightCardDidClosed:(id)a0;
- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (void)tryShowImportantCardArea;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void).cxx_destruct;
- (id)pluginContext;

@end
