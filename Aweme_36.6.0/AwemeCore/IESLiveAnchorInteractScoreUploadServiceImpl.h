@class NSString, NSMutableDictionary, IESLiveInteractPluginRequestApi;

@interface IESLiveAnchorInteractScoreUploadServiceImpl : IESLiveGeneralBaseService <IESLiveAnchorInteractScoreUploadService>

@property (retain, nonatomic) NSMutableDictionary *canReportScoreEffectResources;
@property (retain, nonatomic) IESLiveInteractPluginRequestApi *requestApi;
@property (nonatomic) long long uploadTimeInterval;
@property (retain, nonatomic) NSMutableDictionary *uploadingInteractGames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)addCanUploadGameResourceID:(id)a0 uploadID:(id)a1;
- (void)removeCanUploadGameResourceID:(id)a0;
- (void)startUploadWithGameId:(id)a0;
- (void)uploadInteractGameInfo:(id)a0 extra:(id)a1 type:(int)a2;
- (void)stopUploadWithGameId:(id)a0;
- (void).cxx_destruct;

@end
