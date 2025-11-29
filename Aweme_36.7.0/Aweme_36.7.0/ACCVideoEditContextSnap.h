@class AWERepoFilterModel, AWERepoTrackModel, AWEVideoPublishViewModel, AWERepoAuthorityModel, AWERepoAIGCSyncModel, ACCRepoImageInfoInstanceModel, AWERepoMusicModel, ACCImageAlbumData, NSString, ACCRepoBeautyModel, NSDictionary, ACCRepoTrimCropModel, ACCRepoOriginTextModel, AWERepoEditorGenericTemplateModel, NSArray, AWERepoVoiceChangerModel, ACCVideoCanvasSource, ACCRepoLivePhotoInfoInstanceModel, AWEStudioCaptionInfoModel, AWERepoPropModel, AWERepoMVModel, ACCRepoEditorOneClickFilmingModel, ACCRepoEditEffectModel, NSDate, ACCRepoQuickStoryModel;
@protocol IESServiceProvider;

@interface ACCVideoEditContextSnap : NSObject

@property (nonatomic) BOOL canUseNleBasedDiff;
@property (nonatomic) BOOL enableNleBasedDiff;
@property (retain, nonatomic) AWEVideoPublishViewModel *snapshot;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (nonatomic) BOOL isDeepCopy;
@property (retain, nonatomic) NSDate *snapDate;
@property (copy, nonatomic) NSString *snapProjectsUUIDS;
@property (nonatomic) BOOL hasSaved;
@property (retain, nonatomic) AWERepoMusicModel *repoMusic;
@property (nonatomic) BOOL hasEditClip;
@property (nonatomic) BOOL hasEditClipAfterSave;
@property (nonatomic) unsigned long long stickerCount;
@property (nonatomic) BOOL isStickerEdited;
@property (nonatomic) BOOL isStickerEditedAfterSave;
@property (retain, nonatomic) AWERepoMVModel *repoMV;
@property (retain, nonatomic) ACCRepoEditEffectModel *repoEditEffect;
@property (retain, nonatomic) AWERepoAuthorityModel *repoAuthority;
@property (retain, nonatomic) AWERepoFilterModel *repoFilter;
@property (retain, nonatomic) ACCRepoBeautyModel *repoBeauty;
@property (retain, nonatomic) ACCRepoQuickStoryModel *repoQuickStory;
@property (retain, nonatomic) AWERepoTrackModel *repoTrack;
@property (retain, nonatomic) ACCRepoLivePhotoInfoInstanceModel *RepoLivePhoto;
@property (retain, nonatomic) AWEStudioCaptionInfoModel *captionInfo;
@property (nonatomic) BOOL enableHDRNet;
@property (nonatomic) BOOL aiEnhanceOn;
@property (nonatomic) long long aiEnhanceIntensity;
@property (nonatomic) BOOL enableMixEffect;
@property (nonatomic) BOOL brushPainted;
@property (nonatomic) long long paintVersion;
@property (nonatomic) BOOL imageTemplateApplied;
@property (nonatomic) long long musicBeatsStaus;
@property (retain, nonatomic) AWERepoVoiceChangerModel *repoVoiceChanger;
@property (retain, nonatomic) AWERepoAIGCSyncModel *repoAIGCSync;
@property (retain, nonatomic) AWERepoPropModel *repoPropModel;
@property (retain, nonatomic) AWERepoEditorGenericTemplateModel *editorTemplateModel;
@property (retain, nonatomic) ACCRepoEditorOneClickFilmingModel *oneClickFilmingModel;
@property (nonatomic) long long canvasType;
@property (retain, nonatomic) ACCVideoCanvasSource *canvasSource;
@property (retain, nonatomic) ACCImageAlbumData *imageAlbumData;
@property (retain, nonatomic) ACCRepoTrimCropModel *trimCropModel;
@property (retain, nonatomic) ACCRepoImageInfoInstanceModel *repoImageInfoInstance;
@property (nonatomic) BOOL imageTemplateInfoDidEdit;
@property (nonatomic) BOOL imageTemplateInfoDidEditAfterSave;
@property (retain, nonatomic) ACCRepoOriginTextModel *originTextModel;
@property (retain, nonatomic) NSString *selectPoiID;
@property (retain, nonatomic) NSArray *picTemplateIds;
@property (retain, nonatomic) NSDictionary *subSnaps;

+ (id)snapWithPublishModel:(id)a0 serviceProvider:(id)a1 deepCopy:(BOOL)a2;
+ (id)snapWithPublishModel:(id)a0 serviceProvider:(id)a1 deepCopy:(BOOL)a2 canUseNleBasedDiff:(BOOL)a3 ignoreNleBasedDiff:(BOOL)a4;
+ (id)nlebasedSnapWithPublishModel:(id)a0 serviceProvider:(id)a1;

- (BOOL)hasEditWithSnap:(id)a0;
- (BOOL)aigcHasEditWithSnap:(id)a0;
- (id)initWithPublishModel:(id)a0 serviceProvider:(id)a1 deepCopy:(BOOL)a2 canUseNleBasedDiff:(BOOL)a3 ignoreNleBasedDiff:(BOOL)a4;
- (BOOL)useNleBasedDiff;
- (void)p_snap;
- (BOOL)p_nleBaseHasEditWithSnap:(id)a0;
- (BOOL)p_hasEditWithSnap:(id)a0 ignoredSnapTypes:(id)a1;
- (long long)compareRenderContentWithSnap:(id)a0;
- (void)updateMusicInfo;
- (void)updateMusicBeatStatus;
- (void).cxx_destruct;

@end
