@class NSMutableDictionary, ACCAlbumInputData, APCSilentPublishApi, AWEStudioClipInputData, AUCDTOInputConfig, NSString, APCDTOComposerApi, AWEVideoPublishViewModel, AWEMusicModel, AWEAwemeModel, AWEStudioComposerCreationImpl, NSArray, AWEChallengeModel, ACCRecordViewControllerInputData;

@interface AWEStudioComposerPrepareStageContext : NSObject <AWEStudioComposerFlowMessage>

@property (retain, nonatomic) APCDTOComposerApi *apiModel;
@property (retain, nonatomic) AUCDTOInputConfig *ultraCreationConfig;
@property (readonly, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) AWEStudioComposerCreationImpl *creationInputContextImpl;
@property (copy, nonatomic) id /* block */ exitAction;
@property (nonatomic) BOOL isSilentPublish;
@property (nonatomic) BOOL useTarot;
@property (nonatomic) BOOL ignoreDataConsumer;
@property (copy, nonatomic) APCSilentPublishApi *silentPublishApi;
@property (retain, nonatomic) AWEChallengeModel *challengeInfo;
@property (retain, nonatomic) AWEAwemeModel *awemeInfo;
@property (retain, nonatomic) AWEMusicModel *musicInfo;
@property (retain, nonatomic) ACCAlbumInputData *albumInputData;
@property (retain, nonatomic) ACCRecordViewControllerInputData *recordInputData;
@property (retain, nonatomic) NSMutableDictionary *shootEventTrackInfo;
@property (copy, nonatomic) NSArray *importResourceInfos;
@property (nonatomic) BOOL needEnterClipPage;
@property (retain, nonatomic) AWEStudioClipInputData *clipInputData;
@property (copy, nonatomic) id /* block */ customTransition;
@property (copy, nonatomic) id /* block */ beforeTransition;
@property (copy, nonatomic) NSString *sourceURL;
@property (copy, nonatomic) NSArray *inputAssets;
@property (readonly, nonatomic) BOOL isFinished;
@property (nonatomic) BOOL autoTrackShootEventWhenDealloc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_retain:(id)a0;
+ (void)p_release:(id)a0;
+ (void)p_checkMemoryLeak;

- (void)composerFlowDidEnter:(id)a0;
- (void)safe_setWorkspace:(id)a0;
- (id)editorResourcesForPrepareStage;
- (void).cxx_destruct;
- (void)markAsFinished;
- (id)init;
- (void)dealloc;

@end
