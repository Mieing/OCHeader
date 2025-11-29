@class NSString, ACCAEDataRepositoryInputData;
@protocol DVETrackEventProtocol;

@interface ACCAEEffectTracker : NSObject <ACCAEEffectTrackerService>

@property (retain, nonatomic) ACCAEDataRepositoryInputData *inputData;
@property (weak, nonatomic) id<DVETrackEventProtocol> dveTracker;
@property (nonatomic) double didClickToShowEffectPanelTime;
@property (nonatomic) double startLoadCategoryInfoTime;
@property (nonatomic) double finishLoadCategoryInfoTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (id)createId;
- (void)clearEffect:(id)a0;
- (void)menuEffectButtonClickedIfEffectTrackIsEmpty:(BOOL)a0;
- (void)menuSceneEffectButtonClicked;
- (void)menuCharacterEffectButtonClicked;
- (void)menuReplaceEffectClickedWithCurrentEffect:(id)a0;
- (void)menuCopyEffectClickedWithCurrentEffect:(id)a0;
- (void)menuDeleteEffectClickedWithCurrentEffect:(id)a0;
- (void)menuApplyToCurrentSegmentClickedWithCurrentEffect:(id)a0;
- (void)menuApplyToAllSegmentsClickedWithCurrentEffect:(id)a0;
- (void)effectRenderPerformanceTrackForEffect:(id)a0 extraParams:(id)a1;
- (id)initWithAEDataRepositoryInputData:(id)a0 dveTracker:(id)a1;
- (void)panelEffectListInfoDidFinishRequestForCategory:(id)a0 effectList:(id)a1 error:(id)a2 extraParams:(id)a3;
- (void)panelFirstFrameWithDefaultLandingCategory:(id)a0 extraParams:(id)a1;
- (void)panelEffectListIconFirstRenderForCategory:(id)a0 extraParams:(id)a1;
- (void)effectDownloadTrackForEffect:(id)a0 error:(id)a1 extraParams:(id)a2;
- (void)panelCategoryInfoDidFinishRequestWithCategoryList:(id)a0 error:(id)a1 extraParams:(id)a2;
- (void)panelEffectListUserExperienceDidLoadForCategory:(id)a0 ifFailed:(BOOL)a1 extraParams:(id)a2;
- (void)effectCategoryTabClicked:(id)a0;
- (void)selectEffect:(id)a0 currentCategory:(id)a1;
- (void)saveEffectWithCurrentEffect:(id)a0;
- (void)cancelEffectWithCurrentEffect:(id)a0;
- (void).cxx_destruct;

@end
