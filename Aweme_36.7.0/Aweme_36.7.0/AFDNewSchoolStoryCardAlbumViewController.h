@class UIViewController, AWESearchAlbumTileLayoutController, AWEAwemeModel, UILabel, UILongPressGestureRecognizer;
@protocol AWEModernFeedCellContext, AWEAwemeDetailTableViewControllerProtocol;

@interface AFDNewSchoolStoryCardAlbumViewController : AFDNewSchoolStoryCardBaseViewController <AWESearchRichAlbumTransitionOuterContextProvider>

@property (retain, nonatomic) AWESearchAlbumTileLayoutController *albumTileLayoutController;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (weak, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailVC;
@property (retain, nonatomic) UILabel *searchRecommendLabel;
@property (readonly, nonatomic) AWEAwemeModel *currentAweme;
@property (nonatomic) BOOL shouldUpdateCommerceComponents;
@property (nonatomic) double searchTextStartTime;

- (void)videoPlayerViewTapped:(id)a0;
- (void)addLongPressGesture;
- (id /* block */)shareConfigurationHandler;
- (void)didEndShowing;
- (void)didStartShowing;
- (void)didBecomeActiveForReason:(unsigned long long)a0;
- (void)didResignActiveForReason:(unsigned long long)a0;
- (BOOL)cellFrameModelIsBold;
- (id)descTextTrackParams;
- (void)updateCurrentCellFrameWithModel:(id)a0;
- (void)updateSubviewFrames;
- (void)gotoAlbumDetail;
- (void)videoPlayerViewSingleTappedAction:(id)a0;
- (void)albumTappedWithIndex:(long long)a0;
- (void)commentVideoClickActionWithCommentIDs:(id)a0 showInputView:(BOOL)a1 enterMethod:(id)a2;
- (void)delayReloadCurrentSection;
- (void)showSharePanel;
- (void)resetCommerceData;
- (void)trackNativeButtonOtherShow;
- (void).cxx_destruct;
- (id)contentView;
- (id)transitionContext;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;
- (void)handleLongPressGesture:(id)a0;
- (void)updateWithModel:(id)a0;

@end
