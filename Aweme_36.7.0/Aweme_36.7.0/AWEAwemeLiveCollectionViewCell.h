@class AWELiveAudienceContainerController, NSString, AWEAwemeLiveCollectionCellNavigationController, AWEAwemeModel, AWEAwemeLiveViewCellPreloader, UIViewController;
@protocol IESLiveRoomService, AWEAwemeLiveCollectionViewCellDelegate, AWELandscapePageContextProtocol;

@interface AWEAwemeLiveCollectionViewCell : UICollectionViewCell <AWELiveAudienceControllerDelegate, AWEAwemeLiveCollectionViewCellProtocol>

@property (weak, nonatomic) UIViewController *parentVC;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) id<IESLiveRoomService> liveRoom;
@property (retain, nonatomic) id<AWELandscapePageContextProtocol> landscapePageContext;
@property (nonatomic) long long playOrientation;
@property (retain, nonatomic) AWEAwemeLiveCollectionCellNavigationController *navigationController;
@property (retain, nonatomic) AWELiveAudienceContainerController *audienceController;
@property (weak, nonatomic) UIViewController *addedAudienceController;
@property (nonatomic) BOOL isCreatingAudienceVC;
@property (nonatomic) BOOL hasEnter;
@property (retain, nonatomic) AWEAwemeLiveViewCellPreloader *preLoader;
@property (nonatomic) long long preloaderType;
@property (nonatomic) BOOL disableRotateExit;
@property (nonatomic) BOOL popOpt;
@property (nonatomic) BOOL enableNaviOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) id<AWEAwemeLiveCollectionViewCellDelegate> delegate;
@property (readonly, nonatomic) UIViewController *viewController;

+ (id)reuseIdentifier;

- (void)playIfNeeded;
- (void)pauseAndRemoveVideoController;
- (void)backActionByAutoRotate:(id /* block */)a0;
- (void)prepareForDeletedWithCompletion:(id /* block */)a0;
- (BOOL)unsupportSplitScreen;
- (BOOL)forbidAutoRotate;
- (void)startToShowPipWithShowType:(unsigned long long)a0;
- (void)playLive;
- (void)stopLive;
- (void)configWithAwemeModel:(id)a0 parentViewController:(id)a1 playerViewController:(id)a2 context:(id)a3 pageContext:(id)a4;
- (void)removeAudienceVC;
- (id)createTrackContext;
- (void)createPreloaderIfNeed;
- (id)iesLiveRoom;
- (void)createAudienceControllerIfNeeds;
- (id)audienceViewControllerWithRoomModel:(id)a0 context:(id)a1;
- (void)addViewController:(id)a0;
- (void)changeRoomScrollEnable:(BOOL)a0;
- (void)exitLiveRoomByAuto:(BOOL)a0 trace:(id)a1;
- (void)dismissPopAllVCAndRotate;
- (void)readyToPopViewControllers;
- (void)dismissViewControllersWithCompletion:(id /* block */)a0;
- (void)popViewControllersWithNavi:(id)a0;
- (void)addAudienceVC:(id)a0;
- (void)checkIfNeedRefreshLandscapeOrientaion;
- (void)postDeleteNotificationDislike:(BOOL)a0;
- (void)clearStartToShowPip;
- (void)roomUpdateWithAudienceViewController:(id)a0;
- (void)roomShouldSrollEnable:(BOOL)a0;
- (id)responderViewController;
- (void)viewDidTransition;
- (void)viewWillBeginRotating;
- (void)viewDidEndRotating;
- (void)roomDislikedByLongPress;
- (void)roomWillClosedWithType:(unsigned long long)a0;
- (void)roomClosedWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)prepareForReuse;
- (BOOL)isPlaying;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeViewController:(id)a0;

@end
