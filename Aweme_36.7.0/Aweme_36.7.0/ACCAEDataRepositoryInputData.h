@class ACCMusicVolumeModel, NSString, NSArray, AWEVideoPublishViewModel, NSValue, ACCAEAutoCaptionModel, NSDictionary, ACCExtractAbilityManager, NSNumber;

@interface ACCAEDataRepositoryInputData : NSObject

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) BOOL hasTimeline;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) BOOL isFromMissionQuickStart;
@property (nonatomic) BOOL isImageUnify;
@property (nonatomic) BOOL isIMDuetEffect;
@property (copy, nonatomic) NSNumber *lyricStickerEnableMode;
@property (copy, nonatomic) NSNumber *customStickerEnableMode;
@property (retain, nonatomic) NSString *createId;
@property (nonatomic) BOOL isClipVideoReedit;
@property (nonatomic) BOOL isImageAlbumSlides;
@property (nonatomic) BOOL isInfini;
@property (nonatomic) BOOL disableTextTemplate;
@property (copy, nonatomic) NSArray *excludedStickerTags;
@property (copy, nonatomic) NSString *zipURI;
@property (retain, nonatomic) ACCMusicVolumeModel *volumeModel;
@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) BOOL isDraftOrBackup;
@property (copy, nonatomic) NSValue *gestureInvalidFrameValue;
@property (nonatomic) BOOL isMusicToStory;
@property (nonatomic) BOOL isImageAlbumEdit;
@property (retain, nonatomic) ACCExtractAbilityManager *extractManager;
@property (copy, nonatomic) ACCAEAutoCaptionModel *captionModel;
@property (nonatomic) BOOL hasEffectCaption;
@property (copy, nonatomic) NSString *contentSource;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *mixType;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSDictionary *basicTrackParams;
@property (readonly, nonatomic) BOOL multiProjects;

- (id)initWithPublishViewModel:(id)a0;
- (void)updateDataWithPublishViewModel:(id)a0;
- (void)updateTrackDataWithPublishModel:(id)a0;
- (void)updateDataWithRepoContext:(id)a0;
- (void)updateDataWithRepoFlowControl:(id)a0;
- (void)updateDataWithRepoDraft:(id)a0;
- (void)updateDataWithRepoMusic:(id)a0;
- (void)updateDataWithRepoCaption:(id)a0;
- (void)updateDataWithRepoSticker:(id)a0;
- (void)updateDataWithRepoImageAlbumInfo:(id)a0;
- (void).cxx_destruct;

@end
