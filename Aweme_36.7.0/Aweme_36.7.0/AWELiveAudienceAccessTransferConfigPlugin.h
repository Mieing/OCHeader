@class NSMutableDictionary, AWELiveAudienceAccessContext, NSString, AWELiveAudienceAccessServiceConfig;

@interface AWELiveAudienceAccessTransferConfigPlugin : NSObject <AWELiveAudienceAccessPluginProtocol>

@property (retain, nonatomic) AWELiveAudienceAccessContext *context;
@property (retain, nonatomic) AWELiveAudienceAccessServiceConfig *config;
@property (retain, nonatomic) NSMutableDictionary *feedExceptFirstConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stageDidChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)configForStartEnterLive;
- (void)configForDidEnterLive;
- (void)injectionScopeConfig:(id)a0 withKey:(id)a1;
- (id)singleRoomConfig:(id)a0;
- (id)mergeContextParams:(id)a0 mergeParams:(id)a1;
- (void)configBcmPageParams;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
