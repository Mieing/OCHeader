@class NSString;
@protocol AWEMusicFeedService;

@interface AWEMusicStreamingService : HTSService <AWEMusicStreamingService>

@property (readonly, nonatomic) id<AWEMusicFeedService> feedService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)profileExtensionAreaCardControllerClass;
+ (BOOL)isMiniLuna;
+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2;
+ (void)openMiniLunaWithTrackID:(id)a0 userModel:(id)a1 extraParams:(id)a2;
+ (void)openMiniLunaWithTrackID:(id)a0 userModel:(id)a1 toTab:(unsigned long long)a2 extraParams:(id)a3;
+ (void)openMiniLunaWithTrackID:(id)a0 userModel:(id)a1 toTab:(unsigned long long)a2 extraParams:(id)a3 publicParams:(id)a4;
+ (void)openMiniLunaPlayerWithService:(id)a0 targetViewController:(id)a1 delegate:(id)a2 extraParams:(id)a3 eventServiceCompletion:(id /* block */)a4;
+ (BOOL)hasOpenedMiniLunaBefore;
+ (void)setHasOpenedMiniLunaBefore;
+ (void)openWithEntranceModes:(id)a0 userModel:(id)a1;
+ (void)openWithEntranceModels:(id)a0 toTab:(unsigned long long)a1;
+ (void)openPlayer:(id)a0 title:(id)a1 eventModel:(id)a2 queueDelegate:(id)a3 delegate:(id)a4;
+ (void)openFullMusicPlayerWithMusicId:(id)a0 scene:(id)a1 previousPage:(id)a2 enterMethod:(id)a3 extraParams:(id)a4;
+ (void)openFullMusicPlayerWithMusicId:(id)a0 scene:(id)a1 mustBeSingleSong:(BOOL)a2 previousPage:(id)a3 enterMethod:(id)a4 extraParams:(id)a5;
+ (id)generateLunaPlayerViewControllerParams:(id)a0;
+ (id)generateFullMusicPlayerWithMusicId:(id)a0 scene:(id)a1 mustBeSingleSong:(BOOL)a2 previousPage:(id)a3 enterMethod:(id)a4 lunaTag:(BOOL)a5 extraParams:(id)a6;
+ (void)shareOpenWithMusicPlayer:(id)a0 eventService:(id)a1 musicId:(id)a2 completion:(id /* block */)a3;
+ (id)musicIdClipMappingWithOriginalId:(id)a0;
+ (void)miniShareOpenWithMusicPlayer:(id)a0 secondaryMusicPlayer:(id)a1 musicId:(id)a2 isVideo:(BOOL)a3 extraParams:(id)a4 publicParams:(id)a5 completion:(id /* block */)a6;
+ (void)batchGetMusicLiteInfosWithIds:(id)a0 completed:(id /* block */)a1;
+ (void)batchGetMusicLiteInfosWithIdInfos:(id)a0 completed:(id /* block */)a1;
+ (void)reportAudioOverWhenIMToMiniAgainWithMusicService:(id)a0;
+ (BOOL)isDSPOnTop;
+ (void)changeCollectionModel:(id)a0 enterFrom:(id)a1 completion:(id /* block */)a2;
+ (long long)lunaCollectCount:(id)a0;
+ (BOOL)lunaCollectState:(id)a0;
+ (void)setLunaCollectState:(BOOL)a0 forModel:(id)a1;
+ (BOOL)lunaCopyrightPlayable:(id)a0;
+ (void)changeLunaCollectionModel:(id)a0 completion:(id /* block */)a1;
+ (id)musicShareToStoryExtraInfo;
+ (id)musicCardShareToStoryExtraInfo:(id)a0;
+ (id)miniLunaShareSchemaConfigKey:(id)a0;
+ (void)requestOpenPlatformShareIdWithSourceStyleId:(id)a0 trackId:(id)a1 completion:(id /* block */)a2;
+ (id)bgColorOf:(id)a0;
+ (id)listenFeedBgColorOf:(id)a0;
+ (id)getVideoOrderWithSessionId:(id)a0 itemId:(id)a1;
+ (long long)getSongOrderWithSessionId:(id)a0 musicId:(id)a1;
+ (BOOL)getIsFromHotMusicListWithSessionId:(id)a0;
+ (void)shareAsStoryWithAweme:(id)a0 unmodifiablePublishParams:(id)a1 enterFrom:(id)a2 completion:(id /* block */)a3;
+ (void)shareMusicAsStoryWithMusicId:(id)a0 trackParams:(id)a1 completion:(id /* block */)a2;
+ (id)personPageRouterParamsString:(id)a0;
+ (id)aweDomain;
+ (BOOL)musicPromotionTagIsSupportNewPage;
+ (id)buildMusicServiceWithPlayerTrackParams:(id)a0;
+ (void)openPlayer:(id)a0 queueDelegate:(id)a1 config:(id)a2 relatedTrackParams:(id)a3;
+ (void)openPlayer:(id)a0 queueDelegate:(id)a1 playerDelegate:(id)a2 config:(id)a3 relatedTrackParams:(id)a4;
+ (BOOL)enableMusicCardRecommendFriends;
+ (BOOL)enableMusicCardShareOpt;
+ (void)needAutoAddLunaMusicAnchor:(id)a0 completion:(id /* block */)a1;
+ (void)addCollectObserver:(id)a0;
+ (void)requestLyrics:(id)a0 type:(unsigned long long)a1 previewStartTime:(double)a2 previewEndTime:(double)a3 musicId:(id)a4 completion:(id /* block */)a5;
+ (id)originalSoundTrackViewControllerWithNew:(BOOL)a0 userID:(id)a1 secUserID:(id)a2 targetUser:(id)a3 fromHomepage:(BOOL)a4;
+ (void)reportCollectEventModel:(id)a0 isSuccess:(BOOL)a1 code:(long long)a2 isRepeatCollect:(BOOL)a3;
+ (void)p_reportDspTabShow:(id)a0 extra:(id)a1;
+ (void)openWithEntranceModels:(id)a0 toTab:(unsigned long long)a1 userModel:(id)a2;
+ (id)buildGuideServiceWithKey:(id)a0 enterFrome:(id)a1;
+ (void)reportCancelCollectEventModel:(id)a0 isSuccess:(BOOL)a1 code:(long long)a2;
+ (void)openPlayerWithService:(id)a0 eventService:(id)a1 previousPage:(id)a2 enterMethod:(id)a3 extraParams:(id)a4 disablePopGesture:(BOOL)a5 dismissBlock:(id /* block */)a6;
+ (id)openPlayerWithModel:(id)a0 config:(id)a1 relatedTrackParams:(id)a2 playerTrackParams:(id)a3;
+ (id)openPlayerWithPlaylistID:(id)a0 models:(id)a1 initialIndex:(long long)a2 config:(id)a3 relatedTrackParams:(id)a4 playerTrackParams:(id)a5 enableRepeatRequest:(BOOL)a6;
+ (id)musicPlayerModelFrom:(id)a0 trackParams:(id)a1;


@end
