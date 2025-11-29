@class NSString, HTSLiveLiveBindMicroAppMessage;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppIMPlugin : NSObject <IESLiveNativeAppIMPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler, HTSLiveMessageSubscriber, IESLiveDataSyncDelegate> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (retain, nonatomic) HTSLiveLiveBindMicroAppMessage *bannedMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (BOOL)disableMountForIM;
- (BOOL)disableIronManMountingCountLimitForIM;
- (id)ironManMountingCountLimitToast;
- (void)didReceiveStartMessage:(id)a0;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)pluginContext;

@end
