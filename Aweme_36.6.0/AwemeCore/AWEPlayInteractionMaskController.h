@class NSString, AWEVideoInteractiveDelegator;
@protocol AWEVideoInteractiveProtocol, AWEPauseTagProtocol;

@interface AWEPlayInteractionMaskController : AWEPlayInteractionBaseController <AWEPlayInteractionComponentGlobalPriorityComponentProtocol, AWEPlayInteractionPlayerLifeCycleProtocol, AWEPlayInteractionMaskControllerProtocol>

@property (nonatomic) BOOL videoInteractionPause;
@property (nonatomic) BOOL canDisplaySubviewOnWindow;
@property (nonatomic) BOOL expandStatus;
@property (nonatomic) double playedTime;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) AWEVideoInteractiveDelegator *interactiveDelegator;
@property (retain, nonatomic) id<AWEPauseTagProtocol> pauseManager;
@property (nonatomic) BOOL isPause;
@property (nonatomic) BOOL hasRequest;
@property (nonatomic) BOOL pauseTagDataFromRequest;
@property (retain, nonatomic) id<AWEVideoInteractiveProtocol> interactiveContainer;
@property (weak, nonatomic) id<AWEVideoInteractiveProtocol> currentInteractiveContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (void)setupInteractiveDataSourceIfNecessary:(id)a0;
- (void)updateAllSubViews;
- (void)onPlayerPlay:(id)a0 ifPlay:(BOOL)a1;
- (void)resumePlaying;
- (void)updateVideoStickerView:(id)a0;
- (void)changeStickerInteractiveViewLayoutIfNeeded;
- (void)makeMaskViewsLayout;
- (id)configInteractiveContainerVideoInfoDict;
- (void)playInteractionDescriptionDidClickExpand:(id)a0;
- (void)fetchTagRequset:(id)a0;
- (void)dismissAllSearchTagIfNeed;
- (void)activateStickerComponent;
- (void)showVisionPauseTagWithMethod:(id)a0;
- (BOOL)getSearchVisionTagOptimizeClientV3Enable;
- (id)imageForSearch;
- (BOOL)avoidCanvasPostEnable;
- (BOOL)getDefaultTagScreenShotUpdateEnable;
- (void)fetchTagAndShow:(id)a0;
- (void)showVisionTag;
- (void)updateVideoStickerView:(id)a0 showPauseTagEnable:(BOOL)a1;
- (id)getSearchStickerModelWithVtagDefaultData:(id)a0;
- (id)configInteractiveContainerTrackContext;
- (BOOL)judgePureColor:(id)a0;
- (BOOL)mask_isInteracting;
- (void)setPureMode:(BOOL)a0 animated:(BOOL)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)pause;
- (void)setData:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewWillAppear;
- (void)resume;
- (void)viewDidLoad;
- (id)interactionViewController;
- (void)willDisplay;
- (id)videoDelegate;
- (void)viewWillDisappear;

@end
