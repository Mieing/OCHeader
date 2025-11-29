@class AWENearbyCardLiveCellModel, NSString, UIView, AWEAwemeModel, AWECommonFeedSectionContext, AWENearbyCardLiveHeaderView, UIViewController;
@protocol AWEFeedTableViewCellViewControllerProtocol, AWELivePreStreamViewControllerProtocol, AWECommonFeedCellModelProtocol, UIScrollViewDelegate, AWELiveNewPreStreamViewControllerProtocol;

@interface AWENearbyCardLiveCell : UICollectionViewCell <AWELivePreStreamLiveDelegate, AWELiveAudienceViewControllerDelegate, AWECommonFeedCellProtocol, AWEFeedTableViewCellProtocol>

@property (weak, nonatomic) UIViewController<AWEFeedTableViewCellViewControllerProtocol, AWELivePreStreamViewControllerProtocol, AWELiveNewPreStreamViewControllerProtocol> *currentController;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWENearbyCardLiveHeaderView *headerView;
@property (nonatomic) BOOL liveFinished;
@property (nonatomic) BOOL liveFinishNotifSended;
@property (retain, nonatomic) AWENearbyCardLiveCellModel *customCellModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<AWECommonFeedCellModelProtocol> cellModel;
@property (retain, nonatomic) AWECommonFeedSectionContext *context;
@property (nonatomic) long long indexPath;
@property (readonly, nonatomic) UIViewController<AWEFeedTableViewCellViewControllerProtocol> *viewController;
@property (weak, nonatomic) UIViewController *parentVC;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *registerElementModel;
@property (nonatomic) long long cellDisplayState;
@property (nonatomic) long long cellPageAppearState;
@property (copy, nonatomic) id /* block */ currentCellPageAppearStateBlock;
@property (nonatomic) struct EngineAudioWrapper { } *audioWrapper;
@property (nonatomic) struct EngineVideoWrapper { } *videoWrapper;
@property (nonatomic) BOOL didResetForReusable;
@property (retain, nonatomic) UIView *feedTableViewCellMaskView;
@property (readonly, weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) BOOL hadPrepareToDisplay;

- (void)didDisplay;
- (void)onUserEnterLiveRoom;
- (void)configWithModel:(id)a0;
- (void)deceleratingEndToDisplay;
- (id)liveModuleService;
- (void)configCellWithContext:(id)a0 cellModel:(id)a1;
- (void)removeChildViewController;
- (void)onLivePlayerFirstFrameRender;
- (void)onLivePlayerClose;
- (void)onLiveStreamFinish;
- (void)onRenderAudioFrame:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetLandscapePlayerFrameForProposedPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPreStreamVCReuse;
- (void)_addChildVC:(id)a0 parentController:(id)a1;
- (void)checkLiveStreamFinish;
- (void)reMakerInteractionView;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasVideo;
- (void)reset;
- (void)dealloc;
- (void)setupUI;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)removeViewController:(id)a0;
- (void)willDisplay;

@end
