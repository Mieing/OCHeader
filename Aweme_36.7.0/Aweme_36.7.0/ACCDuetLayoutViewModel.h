@class NSString, RACSubject, ACCDuetLayoutManager, RACSignal, NSArray;
@protocol ACCCameraService, ACCRecordFlowService, ACCRecorderDuetProtocol, ACCRecordPropService;

@interface ACCDuetLayoutViewModel : ACCRecorderViewModel <ACCDuetLayoutManagerDelegate, ACCDuetLayoutService>

@property (retain, nonatomic) RACSubject *duetLayoutDidChangedSubject;
@property (retain, nonatomic) RACSubject *updateIconSubject;
@property (retain, nonatomic) RACSubject *shouldSwapCameraPositionSubject;
@property (retain, nonatomic) RACSubject *applyDuetLayoutSubject;
@property (retain, nonatomic) RACSubject *refreshDuetLayoutsSubject;
@property (retain, nonatomic) RACSubject *successDownFirstLayoutResourceSubject;
@property (retain, nonatomic) RACSubject *duetIconImageReadySubject;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecorderDuetProtocol> duetservice;
@property (retain, nonatomic) ACCDuetLayoutManager *duetManager;
@property (nonatomic) BOOL hasRetryDuetLayout;
@property (nonatomic) long long duetGreenScreenAppearanceThreshold;
@property (nonatomic) long long figureAppearanceDuration;
@property (nonatomic) BOOL isDuetGreenScreenSelected;
@property (nonatomic) BOOL figureAppearanceDurationReachesThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) RACSignal *duetLayoutDidChangedSignal;
@property (readonly, nonatomic) RACSignal *updateIconSignal;
@property (readonly, nonatomic) RACSignal *shouldSwapCameraPositionSignal;
@property (readonly, nonatomic) RACSignal *applyDuetLayoutSignal;
@property (readonly, nonatomic) RACSignal *successDownFirstLayoutResourceSignal;
@property (readonly, nonatomic) RACSignal *refreshDuetLayoutsSignal;
@property (readonly, nonatomic) RACSignal *duetIconImageReadySignal;
@property (readonly, nonatomic) NSArray *duetLayoutModels;
@property (readonly, nonatomic) long long firstTimeIndex;

- (BOOL)enableDuetImportAsset;
- (BOOL)supportImportAssetDuetLayout;
- (void)handleMessageOfDuetLayoutChanged:(id)a0;
- (void)updateFigureAppearanceDurationInMS;
- (BOOL)isDuetLandscapeVideoAndNeedOptimizeLayout;
- (void)sendUpdateIconSignal:(id)a0;
- (void)didSelectDuetLayoutAtIndex:(long long)a0;
- (void)retryDownloadDuetEffects;
- (void)startDuetIfNecessary;
- (void)handleMessageOfFigureAppearanceDurationReachesThreshold;
- (BOOL)isDuetGreenScreenEverShot;
- (void)sendMessageOfRemovingSegmentsToEffectWithID:(long long)a0;
- (void)duetLayoutManager:(id)a0 loadEffectsFinished:(BOOL)a1;
- (void)succeedDownloadFirstLayoutResource;
- (void)duetLayoutManager:(id)a0 willApplyDuetLayoutModel:(id)a1;
- (void)duetLayoutManager:(id)a0 didApplyDuetLayout:(id)a1;
- (void)updateShouldShowDuetGreenScreenAlert;
- (id)p_landscapeVideoConfigDuetLayoutName;
- (BOOL)isImageAlbumProfile;
- (BOOL)isDuetLandscapeImageAlbumClipAndNeedOptimizeLayout;
- (void)retryMultiVideoSeekToTimeIfNeeded;
- (void)moniterDuetCameraCreation;
- (id)supportDuetLayoutList;
- (void).cxx_destruct;
- (void)dealloc;

@end
