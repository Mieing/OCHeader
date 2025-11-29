@class NSString, NSDictionary, NSMutableSet, NSMutableDictionary, ACCRepositoryWorkspace;

@interface ACCEditorPicTemplateTracker : NSObject <ACCPicTemplateTrackServiceProtocol>

@property (weak, nonatomic) ACCRepositoryWorkspace *workspace;
@property (retain, nonatomic) NSString *templateIdsApplyed;
@property (retain, nonatomic) NSString *categoryNamesApplyed;
@property (retain, nonatomic) NSString *templateNamesApplyed;
@property (retain, nonatomic) NSString *templateSourceTypes;
@property (retain, nonatomic) NSString *isCutoutTemplates;
@property (nonatomic) BOOL hasAppliedMultiSlotTemplate;
@property (nonatomic) BOOL hasAppliedAIGCTemplate;
@property (retain, nonatomic) NSMutableSet *hasShownTemplateIds;
@property (retain, nonatomic) NSDictionary *sceneParams;
@property (retain, nonatomic) NSMutableDictionary *operations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackWithTracker:(id)a0 extraParams:(id)a1;
+ (id)commonTrackInfoWithProject:(id)a0;
+ (id)commonTrackInfoForTemplate:(id)a0;
+ (id)trackerWithProjectUUID:(id)a0;
+ (void)trackEffectPicTemplateApplyResultWithId:(id)a0 success:(BOOL)a1 error:(id)a2;
+ (void)trackFetchPicTemplatesListWithExtraTrackInfo:(id)a0;
+ (void)trackFetchPicTemplatesPanelWithExtraTrackInfo:(id)a0;
+ (void)startOpenPicTemplateMiniBar;
+ (void)trackPicTemplateMiniBarOpenDurationWith:(BOOL)a0 error:(id)a1;
+ (void)trackPicTemplateApplyToAllDurationWithModel:(id)a0 extraInfo:(id)a1;
+ (void)trackPicTemplateApplyDurationWithId:(id)a0 extraInfo:(id)a1;
+ (void)trackPixelPicTemplateApplyResultWithModel:(id)a0 extraParams:(id)a1 success:(BOOL)a2 error:(id)a3;
+ (void)startPicTemplateApplyStageWithModel:(id)a0;
+ (void)startPixelPicTemplateApplyStageWith:(id)a0;
+ (void)endPixelPicTemplateApplyToCommitStageWith:(id)a0;
+ (void)startPixelPicTemplateCommitStageWith:(id)a0;
+ (void)startEffectPicTemplateApplyStageWithId:(id)a0;
+ (void)trackPicTemplateDownloadResultWithModel:(id)a0 success:(BOOL)a1 error:(id)a2 extraTrackInfo:(id)a3;
+ (void)startPicTemplateDownloadStageWithModel:(id)a0 isPrefetch:(BOOL)a1;
+ (void)trackStartLoadingWith:(id)a0 project:(id)a1;
+ (void)trackCutoutDidFinish:(id)a0 project:(id)a1 error:(id)a2;
+ (void)trackEndLoadingWith:(id)a0 project:(id)a1 success:(BOOL)a2;
+ (void)trackAIGCApplyPartSuccessWith:(id)a0 project:(id)a1;
+ (void)startTrackWithProject:(id)a0 templateModel:(id)a1 extraParams:(id)a2;
+ (void)removeTrackerWithProjectUUID:(id)a0;
+ (void)removeAllTrackers;
+ (void)trackSuccessWithProjectUUID:(id)a0;
+ (void)trackFailureWithProjectUUID:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2;
+ (id)params:(id)a0 publishModel:(id)a1;
+ (void)beginAIGCTaskCoreTracker:(id)a0;

- (id)commonTrackInfo;
- (id)initWithPublishViewModel:(id)a0;
- (void)updateAppliedTemplatesInfo;
- (void)registerSceneParams:(id)a0;
- (void)setOperationObject:(id)a0 forKey:(id)a1;
- (void)trackSingleTemplateShowEventWith:(id)a0;
- (void)trackTemplateSelectActionWith:(id)a0;
- (void)trackTemplateApplyToAllActionWith:(id)a0;
- (void)trackTemplateApplyClearActionWith:(id)a0;
- (void)trackTemplateDetailPageExitAction:(BOOL)a0;
- (void)trackTemplateCancelPopConfirmAction:(BOOL)a0;
- (void)trackSelectCategoryModel:(id)a0;
- (void)trackReplaceImageAction:(id)a0;
- (void)trackPhotoZoomWithParam:(id)a0;
- (void).cxx_destruct;

@end
