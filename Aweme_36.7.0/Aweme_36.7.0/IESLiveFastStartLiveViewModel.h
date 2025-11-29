@class NSString, IESLiveGuideModel, IESLiveOpenLiveApi, IESLiveAnchorPerfTrackImpl, CreateInfoResponse_CreateInfo, IESLiveGuideStartLiveViewModel, NSMutableArray, IESLiveDI, IESLiveOpenLivePermissionModel, NSDictionary, IESLiveOpenLivePermissionApi;
@protocol IESLiveLocationService, IESLiveEffectProcessLifyCycle, IESLiveAuthorityService, IESLiveFullLinkMonitor, IESLiveRecoder, IESLiveGeneralService;

@interface IESLiveFastStartLiveViewModel : NSObject <IESLiveGuideUserPermissionService, IESLiveGuideOpenLiveService, IESLiveFastStartLiveViewModelProtocol>

@property (retain, nonatomic) IESLiveDI *guideDI;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (retain, nonatomic) IESLiveOpenLiveApi *openApi;
@property (retain, nonatomic) IESLiveOpenLivePermissionApi *permissionApi;
@property (retain, nonatomic) CreateInfoResponse_CreateInfo *openLiveModel;
@property (retain, nonatomic) IESLiveOpenLivePermissionModel *permissionModel;
@property (retain, nonatomic) IESLiveGuideStartLiveViewModel *viewModel;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) NSMutableArray *retainFragments;
@property (nonatomic) BOOL starting;
@property (nonatomic) unsigned long long liveType;
@property (copy, nonatomic) NSString *toastString;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSDictionary *sourceParams;
@property (retain, nonatomic) IESLiveAnchorPerfTrackImpl *anchorPerfTrack;
@property (retain, nonatomic) id<IESLiveEffectProcessLifyCycle> videoEffectLifyCycle;
@property (retain, nonatomic) id<IESLiveLocationService> locationService;
@property (retain, nonatomic) id<IESLiveAuthorityService> authorityService;
@property (retain, nonatomic) id<IESLiveRecoder> recorder;
@property (retain, nonatomic) id<IESLiveGeneralService> guideGeneralServiceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)showToastIfNeeded;
- (void)startLiveWithSourceParams:(id)a0 completion:(id /* block */)a1;
- (void)setupDI;
- (long long)preAuthorityCheck:(id)a0;
- (void)prepareStartLive;
- (void)trackStartLiveCall;
- (void)beginStartLive;
- (void)preApiFetch:(id /* block */)a0;
- (void)handleGotoAnchorLivePage:(id)a0;
- (void)startOpenlive:(id)a0;
- (void)roomCreateApiFetch:(id /* block */)a0;
- (void)handleFinishLiveRegister;
- (void)setupGuideModelWithSourceParams:(id)a0;
- (void)setupFragments;
- (void)resetFisheyeTrackParam;
- (void)willCreateAnchorLiveRoom:(id)a0 anchorRoomContext:(id)a1;
- (void)willEnterAnchorLiveRoom;
- (void)setupEffectProcessModule;
- (void)setUpEffectEnvironment;
- (void)resetOutputSize;
- (BOOL)canRestOutputSize;
- (id)liveTypeArray;
- (BOOL)liveTypeCheck:(id)a0;
- (long long)preUserAuthorityCheck;
- (void)setupRecorder;
- (id)createAnchorViewControllerWithRoom:(id)a0;
- (void)trackStartLiveSuccessedWithRoom:(id)a0;
- (void)gotoAnchorLivePage;
- (void)closeAudienceRoomWithCompletion:(id /* block */)a0;
- (id)getTrackSubScene:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)dealloc;
- (void)setup;
- (void)removeObserver;

@end
