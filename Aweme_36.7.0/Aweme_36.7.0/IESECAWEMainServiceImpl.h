@class NSString;

@interface IESECAWEMainServiceImpl : NSObject <IESECAWEMainService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentRoomID;
+ (void)realNameVerifyWithParams:(id)a0 identityParams:(id)a1 faceVerificationOnly:(BOOL)a2 completion:(id /* block */)a3;
+ (id)personalRecommendSwitchParams;
+ (void)openHunterContainerWithSchema:(id)a0 serverData:(id)a1 clientData:(id)a2;
+ (BOOL)hasDismissedPrivacyAlert;
+ (void)enqueuePlayerWithRoomID:(id)a0 streamData:(id)a1 player:(id)a2;
+ (id)dequeuePlayerWithRoomID:(id)a0 streamData:(id)a1;
+ (id)registerSystemVolumeChanged:(id /* block */)a0;
+ (void)removeVolumeHandlerWithIdentifier:(id)a0;
+ (id)getSSRApiVersion;
+ (void)runPitayaTask:(id)a0 inputParams:(id)a1 completion:(id /* block */)a2;
+ (id)getCurrentLivePlayer;
+ (id)getNewPlayer;
+ (id)getPlayerWithRoomID:(id)a0 streamData:(id)a1;
+ (void)enqueuePlayerInPool:(id)a0 callTrace:(id)a1 resetBlock:(id /* block */)a2;
+ (void)attachPlayerViewTo:(id)a0;
+ (void)ecomScrollViewDidChanged;
+ (id)getAwemeVideoPreloader;
+ (id)getAwemeVideoView;
+ (void)transitToAwemeDetailVCWithVideoView:(id)a0 referString:(id)a1 enterFrom:(id)a2 logExtra:(id)a3 transition:(id)a4 contextProvider:(id)a5;
+ (void)syncGeckoResources;
+ (BOOL)isPitayaServiceReady;
+ (void)registerPitayaMessageHandler:(id)a0 handler:(id /* block */)a1;
+ (void)removePitayaMessageHandler:(id)a0;
+ (id)readMemoryCacheValuesForBusiness:(id)a0 keys:(id)a1 withTryLock:(BOOL *)a2;
+ (id)getMallVideoPlayer;
+ (id)kolDetailTableViewController:(id)a0 referString:(id)a1 enterFrom:(id)a2 logExtraDict:(id)a3 productDict:(id)a4 playTime:(double)a5;
+ (id)kolVideoAuthorID:(id)a0;
+ (double)kolVideoPlayTime:(id)a0;
+ (BOOL)awemeGlobalMuteState;
+ (void)cancelAwemeGlobalMute;
+ (void)registerAvoidBeingStashScene:(id)a0;
+ (id)getDouyinSansFontWithSize:(double)a0;
+ (id)getAudienceAccessServiceSubscriber:(id)a0;
+ (id)audienceAccessServiceWithRoomModel:(id)a0 subscriber:(id)a1;


@end
