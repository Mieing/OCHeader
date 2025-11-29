@class AWESearchVideoFeedTransitionContextProvider, NSArray, NSDictionary, AWESearchTracker, NSString, AWESearchHorizontalAutoPlayViewController, AWESearchLynxHorizontalModel;
@protocol SearchDynamicElementStatusDelegate, AWESearchLynxHorizontalVideoListV2ViewDelegate;

@interface AWESearchLynxHorizontalVideoListV2ElementView : UIView <AWESearchHorizontalAutoPlayViewControllerDelegate, AWESearchHorizontalAutoPlayViewControllerVideoControlDelegate, AWESearchLynxElementViewProtocol, SearchDynamicElementProtocol>

@property (retain, nonatomic) AWESearchHorizontalAutoPlayViewController *horizontalListViewController;
@property (nonatomic) unsigned long long horizontalItemType;
@property (retain, nonatomic) AWESearchLynxHorizontalModel *horizontalModel;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) AWESearchVideoFeedTransitionContextProvider *provider;
@property (retain, nonatomic) NSDictionary *trackerParams;
@property (retain, nonatomic) AWESearchTracker *searchTracker;
@property (weak, nonatomic) id<SearchDynamicElementStatusDelegate> statusDelegate;
@property (weak, nonatomic) id<AWESearchLynxHorizontalVideoListV2ViewDelegate> delegate;
@property (copy, nonatomic) NSString *containerID;
@property (nonatomic) BOOL bounce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long transitionIndex;

- (void)updateAwemeList:(id)a0;
- (struct CGSize { double x0; double x1; })itemSizeForHorizontalAutoPlayViewController:(id)a0;
- (BOOL)isMediaSourceCard;
- (void)updateTrackerContext:(id)a0;
- (id)getLynxElementType;
- (BOOL)hasMoreModelWithHorizontalAutoPlayViewController:(id)a0;
- (BOOL)shouldAutoPlayWhenEnterDetailPageForHorizontalAutoPlayViewController:(id)a0;
- (void)horizontalAutoPlayViewController:(id)a0 didSelectedItemWithIndexPath:(id)a1;
- (void)horizontalAutoPlayViewController:(id)a0 bindData:(id)a1 cellController:(id)a2 indexPath:(id)a3;
- (void)horizontalAutoPlayViewController:(id)a0 displayItemWithIndexPath:(id)a1;
- (void)playVideoButtonTapped;
- (void)pauseVideoButtonTapped;
- (Class)cellControllerClassWithModel:(id)a0;
- (void)updateHorizontalModel:(id)a0;
- (void)p_refreshSearchTrackerCommonParams;
- (void)hookTransitionUpdateOffsetBlock;
- (void)hookTransitionShouldUpdatePlayerControllerBlock;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)transitionContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)videoView;
- (id)viewController;
- (void)didResignActive;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)transitionContextProvider;

@end
