@class NSString, MJTemplateMovieSession, NSArray, OMJMovieOptions, NSMutableArray;

@interface WCFinderTemplateVideoEditViewModel : NSObject

@property (retain, nonatomic) MJTemplateMovieSession *templateSession;
@property (copy, nonatomic) NSString *firstVideoPath;
@property (retain, nonatomic) OMJMovieOptions *movieOptions;
@property (retain, nonatomic) NSMutableArray *musicInfos;
@property (retain, nonatomic) NSArray *assetInfos;
@property (retain, nonatomic) NSArray *templateInfos;
@property (nonatomic) BOOL onlyImageEdit;

+ (id)genOutputParmsWithTemplateInfo:(id)a0 musicInfo:(id)a1;
+ (id)movieOptionsWithLyricEnable:(BOOL)a0 ostMuted:(BOOL)a1 bgmMuted:(BOOL)a2;

- (id)initWithMaterialInfos:(id)a0 firstVideoPath:(id)a1;
- (void)destroyTemplateSession;
- (BOOL)hasStartUpMaasSession;
- (void)startUpMaasSessionWithCompletionBlock:(id /* block */)a0;
- (void)startBlankMoiveCreationAndFetchFromWeChatSvrWithProgressBlock:(id /* block */)a0 movieCompletionBlock:(id /* block */)a1 recommendTemplateFetchCompletionBlock:(id /* block */)a2;
- (void)startBlankMoiveCreationAndFetchRecTemplateProgressBlock:(id /* block */)a0 movieCompletionBlock:(id /* block */)a1 needRecommendTemplate:(BOOL)a2 recommendTemplateFetchCompletionBlock:(id /* block */)a3;
- (void)startMoiveCreationAndFetchRecTemplateProgressBlock:(id /* block */)a0 recommendTemplateFetchCompletionBlock:(id /* block */)a1;
- (void)genNotUseVideoTemplateAndLoadingTemplateWithCompletionBlock:(id /* block */)a0;
- (BOOL)hasLoadingTemplate;
- (void)startMoiveCreationWithTemplateId:(id)a0 musicId:(id)a1 progressBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void)startMoiveCreationWithTemplateId:(id)a0 musicIds:(id)a1 progressBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (id)renderView;
- (void)startPlayWithCompletionBlock:(id /* block */)a0;
- (void)startExportingWithProgressBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)cancelExportingWithCompletion:(id /* block */)a0;
- (void)stopPlayWithCompletionBlock:(id /* block */)a0;
- (void)cleanUpWithCompletionBlock:(id /* block */)a0;
- (id)currentMovieOptions;
- (id)emptyTemplateMovieOptions;
- (id)finderDefaultTemplateMovieOptions;
- (void)updateMovieOptions:(id)a0;
- (void)setBGMMuted:(BOOL)a0;
- (void)setStateOfOST:(BOOL)a0 bgm:(BOOL)a1 lyricEnable:(BOOL)a2;
- (BOOL)isLyricEnable;
- (BOOL)isOSTMuted;
- (BOOL)isBGMMuted;
- (id)genMutableArrayWithArray:(id)a0;
- (unsigned long long)musicCount;
- (id)musicInfoAtIndex:(unsigned long long)a0;
- (void)safeInsertMusicToFront:(id)a0;
- (unsigned long long)templateCount;
- (id)templateInfoAtIndex:(unsigned long long)a0;
- (id)templateIdAtIndex:(unsigned long long)a0;
- (long long)musicIndexOfMusicId:(id)a0;
- (void)changeMusicInfo:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)changeMusicInfo:(id)a0 isBgmMuted:(BOOL)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)changeMusicInfo:(id)a0 option:(id)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)changeTemplateWithTemplate:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)changeTemplateWithTemplate:(id)a0 musicID:(id)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (id)assetInfosWithMaterialInfos:(id)a0;
- (void).cxx_destruct;

@end
