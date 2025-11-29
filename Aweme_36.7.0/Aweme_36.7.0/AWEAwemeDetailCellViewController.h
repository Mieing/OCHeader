@class NSString, UITableViewCell, AWEAwemeModel, UIView, AWEUserModel, NSDictionary;
@protocol AWEFeedTableViewCellProtocol, AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionPanelDelegate, AWEHTSVideoFlameCountView, AWEGrootBottomViewProtocol, AWEAwemeDetailCellViewControllerDelegate, AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionCommerceDelegate, AWEFeedTableViewCellControllerPlayerDelegate, AWEAdOperationGuideView;

@interface AWEAwemeDetailCellViewController : AWEAwemeDetailBaseViewController <AWEDetailCellViewControllerProtocol>

@property (retain, nonatomic) UIView<AWEAdOperationGuideView> *adOperationView;
@property (retain, nonatomic) UIView<AWEHTSVideoFlameCountView> *flameCountStackView;
@property (nonatomic) BOOL hasLoadFirstImage;
@property (retain, nonatomic) UIView *imagePreviewMask;
@property (weak, nonatomic) id<AWEAwemeDetailCellViewControllerDelegate> detailCellViewControllerDelegate;
@property (retain, nonatomic) AWEUserModel *homepageUser;
@property (readonly, nonatomic) UIView<AWEGrootBottomViewProtocol> *grootSpeciesShootTipView;
@property (weak, nonatomic) id<AWEFeedTableViewCellControllerPlayerDelegate> playerDelegate;
@property (nonatomic) long long indexPath;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long type;
@property (readonly, nonatomic) id<AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEPlayInteractionViewControllerProtocol> interactionController;
@property (weak, nonatomic) UITableViewCell<AWEFeedTableViewCellProtocol> *superCell;
@property (copy, nonatomic) NSDictionary *extTrackLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)didChangeAlbumIndex:(long long)a0 animated:(BOOL)a1;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)player:(id)a0 didUpdateFromPlayViewController:(id)a1;
- (void)playerWillStartNextLoop:(id)a0;
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (void)playerVideoVCDidReadyForDisplay:(id)a0;
- (void)imageConfigMsg:(id)a0;
- (void)firstImageLoadFinished;
- (void)videoController:(id)a0 playerPlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (BOOL)canHandleGestureInCell:(id)a0;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (void)setHideMusicInfoViewFlag:(BOOL)a0;
- (void)setShowGoodsElementViewFlag:(BOOL)a0;
- (void)setShowGoodsCardAnchorElementViewFlag:(BOOL)a0;
- (void)closeAdOperationViewForCommentInputMaskView;
- (BOOL)shouldRespondSingleClick;
- (void)showAdOperationView:(id)a0;
- (void)closeAdOperationViewWhenViewWillDisappear:(id)a0;
- (void)configBackgroundPlay;
- (void)configAdOperationView:(id)a0;
- (void)__addFlameCountViewIfNeeded;
- (void)__updateFlameCountViewShowStatus;
- (void)removeImagePreviewMask;
- (void)trackAdOperationCloseForLiveAppointmentIfNeeded;
- (void)closeAdOperationView:(unsigned long long)a0;
- (void)adOperationGuideViewTapped;
- (void).cxx_destruct;
- (void)play;
- (void)viewDidLayoutSubviews;
- (void)prepareForReuse;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)addObservers;

@end
