@class NSDate, OMJRecordingFinishInfo, NSString, FinderVideoTemplateInfo, MMBGMSelectedMusicResult, MJMovieComposingDraftManager, NSData, NSArray, MJShootAIGCAsyncGenResultPostContext, MJShootRedPacketTransParams, RecommendedMusicInfo;

@interface MJPublisherContext : NSObject

@property (retain, nonatomic) NSDate *startPreviewingTimestamp;
@property (retain, nonatomic) NSDate *startRecordingTimestamp;
@property (retain, nonatomic) MJMovieComposingDraftManager *draftManager;
@property (retain, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) MMBGMSelectedMusicResult *appliedMusicInfo;
@property (nonatomic) unsigned long long enterScene;
@property (retain, nonatomic) NSString *entryType;
@property (retain, nonatomic) NSString *postId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *sourceFeedId;
@property (retain, nonatomic) NSString *sourceSongId;
@property (retain, nonatomic) NSString *followFeedTemplateId;
@property (retain, nonatomic) NSString *selectedTemplateId;
@property (retain, nonatomic) NSString *selectedTemplateTabId;
@property (nonatomic) unsigned long long selectedTemplatePosition;
@property (retain, nonatomic) NSData *selectedTemplateSessionBuffer;
@property (nonatomic) unsigned long long selectedTemplateType;
@property (retain, nonatomic) NSString *defaultSelectedTemplateId;
@property (nonatomic) BOOL selectedTemplateIsFavorite;
@property (nonatomic) BOOL selectedTemplateIsAIGC;
@property (retain, nonatomic) NSString *selectedTemplateAIGCTaskID;
@property (nonatomic) BOOL isFrontFacingCamera;
@property (nonatomic) BOOL isDuetShoot;
@property (nonatomic) BOOL isAssetGenerate;
@property (nonatomic) unsigned long long exportScene;
@property (nonatomic) unsigned long long videoSource;
@property (nonatomic) unsigned long long creationPageId;
@property (nonatomic) BOOL isFromMovieTemplate;
@property (nonatomic) BOOL isShootComposingFirstInit;
@property (nonatomic) BOOL isOnSavingVideo;
@property (retain, nonatomic) OMJRecordingFinishInfo *recordingFinishInfo;
@property (nonatomic) BOOL didEnteredTemplateOrMovieInOnceComposingSession;
@property (nonatomic) BOOL didEnteredShootPreviewInOnceComposingSession;
@property (nonatomic) BOOL isUsingTemplateComposing;
@property (retain, nonatomic) FinderVideoTemplateInfo *shootFollowTemplateInfo;
@property (retain, nonatomic) MJShootRedPacketTransParams *redPacketTransParams;
@property (retain, nonatomic) MJShootAIGCAsyncGenResultPostContext *aigcAsyncResultPostContext;
@property (retain, nonatomic) RecommendedMusicInfo *patMusicInfo;
@property (retain, nonatomic) NSArray *wxToMaasMusicIds;

+ (BOOL)shouldEnablePurePicturePostWithAssetInfos:(id)a0;
+ (BOOL)isAllImagesWithAssetInfos:(id)a0;

- (id)generateReportingParams;
- (void)resetReportingInfo;
- (id)getComposingEffectivePatMusicInfoWithMusicInfo:(id)a0 wxToMaasMusicIds:(id)a1 musicResult:(id)a2;
- (id)generateAIGCMetadata;
- (BOOL)isFromFinderRedPackageEntry;
- (void)checkIsMJProducedVideoWithComposingVC:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)generatePostSessionModelIfIsMJProducedVideoWithMMAsset:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
