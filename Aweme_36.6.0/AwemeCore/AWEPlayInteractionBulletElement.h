@class AWEPlayInteractionBulletElementViewModel, UIViewController, NSMutableIndexSet, NSString, UIView, NSMutableArray, UITapGestureRecognizer;
@protocol AWEBarrageContainerViewProtocol, AWEPlayInteractionViewControllerProtocol;

@interface AWEPlayInteractionBulletElement : AWEPlayInteractionLeftElement <UIGestureRecognizerDelegate, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView<AWEBarrageContainerViewProtocol> *barrageContainerView;
@property (retain, nonatomic) NSMutableArray *barrageFrames;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) AWEPlayInteractionBulletElementViewModel *viewModel;
@property (retain, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionViewController;
@property (retain, nonatomic) NSMutableArray *insertedBarrage;
@property (retain, nonatomic) NSMutableIndexSet *deletedIndexes;
@property (nonatomic) BOOL hasHotSpotTagShowTrackPost;
@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)activateInfoWithContext:(id)a0;

- (void)setHide:(BOOL)a0;
- (void)videoDidActivity;
- (BOOL)shouldResponseTapEventOnLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (void)viewController_viewWillDisappear;
- (id)aAWEPadModuleAdapter;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)addGesture;
- (void)onAWEAwemeDeleteNotification:(id)a0;
- (void)diggWithNotification:(id)a0;
- (void)deleteCommentWithNotification:(id)a0;
- (void)removeBarrageAtIndexSet:(id)a0;
- (void)barragePlay;
- (void)barragePause;
- (void)p_trackForHotSpotTagIfNeeded:(id)a0;
- (BOOL)shouldShowLandscapeEntry;
- (void)insertBarrageModel:(id)a0;
- (void)p_trackPOIEventsIfNeeded;
- (void)p_trackGeneralEventsIfNeeded;
- (void)updateBarrageFrames;
- (void)handleBarragePause:(id)a0;
- (void)handleBarragePlay:(id)a0;
- (void)addCommentWithNotification:(id)a0;
- (void)reloadDataWithNotification:(id)a0;
- (void)updateAndReloadViewerBarrage;
- (void)onBarrageClicked:(id)a0;
- (void)updateBarrageFramesWithUserAgreeViewerRecordInGuideView:(BOOL)a0;
- (BOOL)p_shouldShowViewerBarrageWithUserAgreeViewerRecord:(BOOL)a0;
- (void)p_clearExistedBarrageFrames;
- (id)frameWithModel:(id)a0;
- (void)loadNewStoryBarrageIconIfNeeded;
- (id)awemeCreateTimeWithBarrageType:(long long)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (id)context;
- (void)addObservers;

@end
