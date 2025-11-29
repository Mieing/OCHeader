@class NSString, NSMapTable;
@protocol AWEMessageReachInternalAbilityProtocol;

@interface AWEMessageReachChannelManager : NSObject <AWEMessageReachChannelAbilityProtocol>

@property (weak, nonatomic) id<AWEMessageReachInternalAbilityProtocol> config;
@property (retain, nonatomic) NSMapTable *pluginControllerDict;
@property (retain, nonatomic) NSMapTable *dotCountPluginMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerMessageReachPluginController:(id)a0 channelID:(id)a1;
- (void)updateMessageReachShowingModelWithChannelID:(id)a0 paramContext:(id)a1 componentModel:(id)a2;
- (id)canShowMessageReachDataWithChannelID:(id)a0 componentModel:(id)a1 paramContext:(id)a2;
- (void)registerDotCountPlugin:(id)a0 channelID:(id)a1;
- (id)getMessageReachPluginControllerWithChannelID:(id)a0;
- (id)getMessageReachChannelWithChannelID:(id)a0;
- (BOOL)canRequestMessageReachDataWithChannel:(id)a0 paramContext:(id)a1;
- (void)enumerateMessageReachPluginChannelUsingBlock:(id /* block */)a0;
- (id)startRequestMessageReachDataWithChannel:(id)a0 paramContext:(id)a1;
- (BOOL)p_hasChannel:(id)a0;
- (long long)canShow:(id)a0 componentModel:(id)a1;
- (BOOL)canRequestMessageReachDataWithChannelID:(id)a0 paramContext:(id)a1;
- (id)getNotNeedRequestMessageReachChannelListWithParamContext:(id)a0;
- (id)startRequestMessageReachDataWithParamContext:(id)a0;
- (id)startRequestMessageReachDataWithChannelIDList:(id)a0 paramContext:(id)a1;
- (void)handleComponentActionToChannelWithChannelID:(id)a0 sceneModel:(id)a1 paramContext:(id)a2;
- (void)handleSceneModelShowFailedWithChannelID:(id)a0 sceneModel:(id)a1 paramContext:(id)a2;
- (void)sendDataToChannelWithChannelID:(id)a0 sceneModel:(id)a1 paramContext:(id)a2;
- (id)getBlockBizTrackExtraWithChannelID:(id)a0 componentModel:(id)a1 paramContext:(id)a2;
- (BOOL)canChannelEscapeUidCheckWithChannelID:(id)a0;
- (id)componentVerifyWithChannelID:(id)a0 verifyModel:(id)a1;
- (void)clearAllStatusWithChannelID:(id)a0 paramContext:(id)a1;
- (void)clearMessageReachAllStatusFromBusiness:(id)a0 businessScene:(id)a1;
- (id)getDotCountPluginWithChannelID:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
