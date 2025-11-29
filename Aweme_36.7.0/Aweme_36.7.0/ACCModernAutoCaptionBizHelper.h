@class ACCTextIntelligenceModel, NSString, NSArray, ACCModernAutoCaptionUploadInfo, NSMutableDictionary, NSOperationQueue, AWERepoCaptionModel, NSDictionary, ACCModernAutoCaptionInputConfig;

@interface ACCModernAutoCaptionBizHelper : NSObject

@property (retain, nonatomic) ACCModernAutoCaptionInputConfig *config;
@property (retain, nonatomic) AWERepoCaptionModel *helpRepo;
@property (copy, nonatomic) NSArray *captions;
@property (nonatomic) unsigned long long mandarinStatus;
@property (copy, nonatomic) NSString *translationLanguage;
@property (copy, nonatomic) NSArray *translationBackupCaptions;
@property (copy, nonatomic) ACCTextIntelligenceModel *intelligenceInfo;
@property (nonatomic) BOOL highlightReady;
@property (copy, nonatomic) NSString *originStr;
@property (copy, nonatomic) NSArray *faceInfo;
@property (nonatomic) BOOL faceInfoProcessing;
@property (copy, nonatomic) id /* block */ faceInfoCompletion;
@property (nonatomic) BOOL isTranslationLoading;
@property (nonatomic) BOOL reGenerate;
@property (nonatomic) BOOL reGenerateSuccess;
@property (copy, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSOperationQueue *featureQueue;
@property (retain, nonatomic) NSMutableDictionary *intelliCache;
@property (nonatomic) long long audioSourceState;
@property (nonatomic) long long lastAudioSourceType;
@property (retain, nonatomic) NSMutableDictionary *audioSourceContexts;
@property (retain, nonatomic) NSMutableDictionary *mandarinStatusByAudioSource;
@property (retain, nonatomic) NSDictionary *contextBackup;
@property (readonly, copy, nonatomic) NSDictionary *intelligenceInfos;
@property (readonly, copy, nonatomic) ACCModernAutoCaptionUploadInfo *uploadInfo;
@property (nonatomic) long long currentAudioSourceType;

+ (void)generateFaceInfosWithCaptions:(id)a0 queue:(id)a1 size:(struct CGSize { double x0; double x1; })a2 abilityManager:(id)a3 completion:(id /* block */)a4;
+ (void)generateHighlightCaptionsWithCaptions:(id)a0 size:(struct CGSize { double x0; double x1; })a1 duration:(double)a2 triggerType:(long long)a3 completion:(id /* block */)a4;
+ (void)generateIntelligentPackWithCaptions:(id)a0 originalStr:(id)a1 faceResult:(id)a2 style:(id)a3 size:(struct CGSize { double x0; double x1; })a4 duration:(double)a5 triggerType:(long long)a6 completion:(id /* block */)a7;
+ (id)deepCopyCaptions:(id)a0;
+ (BOOL)hasSelectedIndexForPlayTime:(double)a0 captions:(id)a1 nearestIndex:(unsigned long long *)a2;
+ (unsigned long long)nextPlayIndexForTime:(double)a0 captions:(id)a1;

- (BOOL)shouldUseDirectProperties;
- (void)generateFaceInfosWithCompletion:(id /* block */)a0;
- (void)requestTextTemplateInfos:(id)a0 isInitial:(BOOL)a1 captionRenderCompletion:(id /* block */)a2 totalRenderCompletion:(id /* block */)a3;
- (void)generateCaptionsWithAudioSourceType:(long long)a0 forceReload:(BOOL)a1 isTranslation:(BOOL)a2 completion:(id /* block */)a3;
- (void)cancelAllRequest;
- (void)applyInitialData;
- (void)commitAndQueryCaptionWithForceLoad:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)hasAudioSourceTypeChanged;
- (BOOL)enableAutoCaptionLyricOptimize;
- (long long)handleAutoCaption:(id)a0 disableMandarinTranslation:(BOOL)a1 language:(id)a2 error:(id)a3;
- (long long)checkStatusForCaptions:(id)a0;
- (void)readExistedCaptionsWithCompletion:(id /* block */)a0;
- (void)setAudioSourceTypeToTarget:(long long)a0;
- (void)confirmAudioSourceTypeChange;
- (void)rollbackAudioSourceType;
- (void)commitAndQueryCaptionTranslationWithMannual:(BOOL)a0 forceLoad:(BOOL)a1 completion:(id /* block */)a2;
- (void)startQueryCaptionsWithForceLoad:(BOOL)a0 completion:(id /* block */)a1;
- (void)generateIntelligentPackWithStyle:(id)a0 completion:(id /* block */)a1;
- (void)generateHighlightCaptionsWithCompletion:(id /* block */)a0;
- (void)trackDuration:(double)a0 period:(id)a1 extraParams:(id)a2;
- (BOOL)isPlaceholderCaption;
- (void)updateEditAutoCaptions:(id)a0;
- (void)generateForTemplateRelatedResources:(id)a0 effectModel:(id)a1 type:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)nameForAudioSourceType:(long long)a0;
- (void)resetCaptionContext;
- (BOOL)shouldShowReloadAlert;
- (BOOL)createPlaceholderCaptionIfNeeded;
- (BOOL)captionsHasEdited;
- (id)nameForMandarinStatus:(unsigned long long)a0;
- (id)voiceCaptions;
- (id)musicCaptions;
- (void)clearContextForAudioSourceType:(long long)a0;
- (void)backupCurrentContext;
- (void)restoreFromBackup;
- (BOOL)hasValidBackup;
- (void)clearBackup;
- (void).cxx_destruct;
- (id)currentContext;
- (id)initWithConfig:(id)a0;

@end
