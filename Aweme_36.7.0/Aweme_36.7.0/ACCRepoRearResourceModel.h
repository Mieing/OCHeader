@class AWERecordCaptionFollowShotModel, NSArray, NSString, AWERequestVidFeatureModel, AWETextOnImageModel, ACCRearMusicModel, AWEMusicModel;

@interface ACCRepoRearResourceModel : NSObject <NSCopying, ACCRepositoryTrackContextDeprecated, ACCRepoRegister, ACCRepoRearResourceData>

@property (copy, nonatomic) NSArray *stickerIDArray;
@property (copy, nonatomic) NSString *gradeKey;
@property (copy, nonatomic) NSString *propSelectFrom;
@property (copy, nonatomic) NSString *propReqId;
@property (retain, nonatomic) ACCRearMusicModel *rearMusic;
@property (nonatomic) BOOL shouldStopLoadWhenfetchMusicError;
@property (copy, nonatomic) NSString *musicSelectFrom;
@property (copy, nonatomic) NSString *musicSelectPageName;
@property (copy, nonatomic) NSString *rearMusicID;
@property (copy, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSArray *bindEffects;
@property (nonatomic) BOOL isUserSwappedCamera;
@property (copy, nonatomic) NSString *stickerBackgroundImagePath;
@property (nonatomic) BOOL autoApplyMusic;
@property (nonatomic) BOOL autoApplyProp;
@property (nonatomic) BOOL showStickerPanel;
@property (nonatomic) BOOL hasInsertPropIds;
@property (nonatomic) BOOL isFetchFinished;
@property (copy, nonatomic) NSString *effectSocialData;
@property (retain, nonatomic) AWERequestVidFeatureModel *featureModel;
@property (retain, nonatomic) AWETextOnImageModel *textOnImageModel;
@property (retain, nonatomic) AWERecordCaptionFollowShotModel *captionFollowShotModel;
@property (retain, nonatomic) AWEMusicModel *effectShootSelectMusic;
@property (retain, nonatomic) AWEMusicModel *effectDownloadShootSelectMusic;
@property (retain, nonatomic) AWEMusicModel *templateShootSelectMusic;
@property (copy, nonatomic) NSString *templateShootFromPassThroughtSelectMusicId;
@property (nonatomic) BOOL templateShootSelectMusicAfterPlayStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (id)musicModel;
- (void)setMusicModel:(id)a0;
- (id)defaultStickerBackgroundImage;
- (id)stickerIDsStr;
- (void)resetMusicInfo;
- (long long)effectNeedCameraActualPosition:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
