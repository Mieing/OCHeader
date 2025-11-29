@class NSString, ACCStudioInternalSubServiceContainer;
@protocol AWEStudioDraftService, AWEStudioClipService, AWEStudioMusicUtilService, AWEStudioStoryVideoUtilService, AWEStudioEditVideoCoverService, AWEStudioMusicService, AWEStudioDirectService, AWEStudioMultiAbilityService, AWEStudioMemoriesService, AWEStudioEditChapterService, AWEStudioPushService, AWEStudioCloudAlbumService, AWEStudioLiveService, AWEStudioTemplateService, AWEStudioTaskService, AWEStudioStoryVideoService, AWEStudioFriendsRouterService, AWEStudioAlbumService, AWEStudioDirectUtilService, AWEPublishProcessService, AWEStudioCutSameService, AWEStudioMVService, AWEStudioPublishRouterGenericTemplateService, AWEStudioDuetService, AWEStudioDraftUtilService, AWEStudioChallengeService, AWEACCExternalPublishService, AWEStudioReeditService, AWEStudioStickerService, AWEStudioPublishPOIService, AWEStudioStickerUtilService, AWEStudioAnchorInfoConfigService, AWEStudioEditService;

@interface AWEACCStudioPublishServiceImpl : HTSService <AWEStudioPublishService> {
    ACCStudioInternalSubServiceContainer *m_container;
}

@property (readonly, nonatomic) id<AWEStudioDirectService> direct;
@property (readonly, nonatomic) id<AWEStudioStickerService> sticker;
@property (readonly, nonatomic) id<AWEStudioMusicService> music;
@property (readonly, nonatomic) id<AWEStudioEditService> edit;
@property (readonly, nonatomic) id<AWEStudioCutSameService> cutSame;
@property (readonly, nonatomic) id<AWEStudioClipService> clip;
@property (readonly, nonatomic) id<AWEStudioChallengeService> challenge;
@property (readonly, nonatomic) id<AWEStudioDraftService> draft;
@property (readonly, nonatomic) id<AWEStudioDuetService> duet;
@property (readonly, nonatomic) id<AWEStudioFriendsRouterService> friends;
@property (readonly, nonatomic) id<AWEStudioLiveService> live;
@property (readonly, nonatomic) id<AWEStudioMVService> MV;
@property (readonly, nonatomic) id<AWEStudioPublishPOIService> publishPOI;
@property (readonly, nonatomic) id<AWEStudioAlbumService> album;
@property (readonly, nonatomic) id<AWEStudioPushService> push;
@property (readonly, nonatomic) id<AWEStudioReeditService> reedit;
@property (readonly, nonatomic) id<AWEStudioTaskService> task;
@property (readonly, nonatomic) id<AWEStudioMultiAbilityService> multiAbility;
@property (readonly, nonatomic) id<AWEStudioTemplateService> templateToEdit;
@property (readonly, nonatomic) id<AWEStudioStoryVideoService> storyVideo;
@property (readonly, nonatomic) id<AWEACCExternalPublishService> publish;
@property (readonly, nonatomic) id<AWEStudioPublishRouterGenericTemplateService> genericTemplate;
@property (readonly, nonatomic) id<AWEStudioEditChapterService> editChapter;
@property (readonly, nonatomic) id<AWEStudioEditVideoCoverService> editVideoCover;
@property (readonly, nonatomic) id<AWEStudioDirectUtilService> directUtil;
@property (readonly, nonatomic) id<AWEStudioStickerUtilService> stickerUtil;
@property (readonly, nonatomic) id<AWEStudioMusicUtilService> musicUtil;
@property (readonly, nonatomic) id<AWEStudioDraftUtilService> draftUtil;
@property (readonly, nonatomic) id<AWEStudioStoryVideoUtilService> storyVideoUtil;
@property (readonly, nonatomic) id<AWEStudioMemoriesService> memories;
@property (readonly, nonatomic) id<AWEStudioCloudAlbumService> cloudAlbum;
@property (readonly, nonatomic) id<AWEStudioAnchorInfoConfigService> anchorInfoConfig;
@property (readonly, nonatomic) id<AWEPublishProcessService> process;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)utilServices;
+ (BOOL)isUtilService:(id)a0;

- (void)onServiceInit;
- (id)resolveService:(id)a0;
- (id)nonnullServiceOfProtocol:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
