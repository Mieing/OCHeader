@class NSString;

@interface AWEStudioExtFriendsService : HTSService <AWEStudioExtFriendsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (void)enterFriendsCameraWithShootWay:(id)a0 enterFrom:(id)a1 transitionDelegate:(id)a2 modeArray:(id)a3;
- (void)startCameraWithDataConfig:(id)a0 friendsCameraScene:(unsigned long long)a1 customConfiguration:(id)a2 injectService:(id /* block */)a3 completion:(id /* block */)a4;
- (void)startCameraWithDataConfig:(id)a0 friendsCameraScene:(unsigned long long)a1 injectService:(id /* block */)a2 completion:(id /* block */)a3;
- (void)startCameraWithDataConfig:(id)a0 friendsCameraScene:(unsigned long long)a1 landingSubModeID:(id)a2 injectService:(id /* block */)a3 completion:(id /* block */)a4;
- (id)publishViewModelForSocialCameraWithFriendsCameraScene:(unsigned long long)a0;
- (id)shootSameFriendsCameraCustomization;
- (void)mergeSocialCameraDataWithComposerApi:(id)a0 withScene:(unsigned long long)a1;
- (BOOL)isSocialCameraEnabled;
- (BOOL)isStoryCameraWithPublishViewModel:(id)a0;
- (void)injectStoryCameraAbility:(id)a0;
- (BOOL)isSocialCameraAnchorWithAwemeModel:(id)a0 shootSameScene:(unsigned long long)a1;
- (BOOL)isCinemaFilterAnchorWithAwemeModel:(id)a0;
- (void)appendStoryInfoToTrackParams:(id)a0 awemeModel:(id)a1;
- (unsigned long long)friendsCameraSceneWithPublishViewModel:(id)a0;
- (void)injectJumpOldSocialTextModeInEditViewAbility:(id)a0;
- (Class)storyEditSparkBackgroundComponentClass;
- (Class)storyEditMusicShareStoryComponentClass;
- (void)updateMovieFilterAnchorRequestParams:(id)a0 publishViewModel:(id)a1;
- (id)storyCameraSchemaWithComposerModel:(id)a0;
- (void)startCameraWithShootWay:(id)a0 enterFrom:(id)a1;
- (void)startCameraOnlyWithComposer:(id)a0;
- (void)startCameraWithPublishInputData:(id)a0 trackInfo:(id)a1 completion:(id /* block */)a2;
- (id)friendsCustomizationWithScene:(unsigned long long)a0;
- (id)sharedPostPageQuickStoryShareService;
- (void)setSharedPostPageQuickStoryShareService:(id)a0;
- (void)startCameraWithDataConfig:(id)a0 friendsCameraScene:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)syncInputData:(id)a0 toDataConfig:(id)a1;
- (void)startCameraWithDataConfig:(id)a0 friendsCameraScene:(unsigned long long)a1 customConfiguration:(id)a2 landingSubModeID:(id)a3 injectService:(id /* block */)a4 completion:(id /* block */)a5;
- (BOOL)p_shouldUseOldSocialTextModeInEditView:(id)a0;
- (id)socialCameraCustomTrackParamsWithScene:(unsigned long long)a0;
- (void)p_appendStoryCameraBizParamsIfNeeded:(id)a0;
- (void)syncTrackDataToBizData:(id)a0 withInputData:(id)a1;
- (void)syncRepoMusicToMusicDTO:(id)a0 withInputData:(id)a1;
- (void)syncCameraStickerDTO:(id)a0 withInputData:(id)a1;
- (void)syncEffectDTO:(id)a0 withInputData:(id)a1;
- (void)syncAIGCEffectDTO:(id)a0 withInputData:(id)a1;
- (id)mergeDictionary:(id)a0 withDictionary:(id)a1;

@end
