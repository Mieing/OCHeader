@class IESECCommentLynxManager, NSString, IESECCommentBizTracker, IESECCommentSliceManager, IESECOnceHelper, IESECCommentBFFDataController, IESECDurationHelper, IESECCommentPageContext, NSMutableArray, UIViewController, IGListAdapter, IESECGoodsCommentContext;

@interface IESECCommentViewModel : NSObject <IESECCommentViewModelProtocol, IGListDisplayDelegate, IGListAdapterDataSource>

@property (retain, nonatomic) NSMutableArray *currentDisplayCommentList;
@property (retain, nonatomic) IESECOnceHelper *once;
@property (retain, nonatomic) NSMutableArray *showedCommentList;
@property (retain, nonatomic) IESECCommentSliceManager *sliceManager;
@property (retain, nonatomic) IESECCommentLynxManager *lynxManager;
@property (retain, nonatomic) IESECCommentPageContext *pageContext;
@property (nonatomic) BOOL viewAppeared;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) IESECGoodsCommentContext *context;
@property (retain, nonatomic) IESECCommentBFFDataController *dataController;
@property (retain, nonatomic) IESECCommentBizTracker *tracker;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) IESECDurationHelper *stayDurationHelper;
@property (readonly, copy, nonatomic) NSString *picTag;
@property (nonatomic) BOOL isWithSKU;
@property (nonatomic) double bottomViewHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)updateAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)commentSwitchType;
- (BOOL)shouldHideMultiplyButton;
- (void)openSKUView;
- (void)clearOnce;
- (void)transMode:(long long)a0;
- (void)commentInteractionDurationTrack:(id)a0;
- (void)trackSKUShowWithMultiSKU:(BOOL)a0;
- (void)fetchTagInfoRequestTrack;
- (void)fetchTagInfoRequestFailedTrack:(id)a0 error:(id)a1;
- (void)fetchCommentListRequestTrack;
- (void)fetchCommentListRequestFailedTrack:(id)a0 error:(id)a1;
- (void)clickSwitchModeView:(id /* block */)a0;
- (void)trackDidTapSlideToTopBtn;
- (void)openCommentImagePreview:(long long)a0 videoModel:(id)a1 commentIndex:(long long)a2 commentId:(id)a3 picCount:(long long)a4;
- (long long)mediaIndex:(long long)a0 imageIndex:(long long)a1 enterFrom:(unsigned long long)a2;
- (void)clickMediaLikeBtn:(id)a0 previewCommentId:(id)a1;
- (void)trackExposureSlideToTopBtn;
- (void)requestSKUWithClickArea:(id)a0 status:(id)a1;
- (void)commentMediaControllerDidDismiss:(long long)a0 isCurrentVideoTab:(BOOL)a1 currentComment:(id)a2 showNum:(long long)a3;
- (void)pushMultipleMedias:(id)a0 currentComment:(id)a1 showNum:(long long)a2;
- (BOOL)isMultiSKUProduct;
- (void)invalidateLayoutWithIndexPaths:(id)a0;
- (void)updateTagStatus:(id)a0;
- (void)trackPerformanceWithInfo:(id)a0;
- (void)setStoreUpdate:(id)a0;
- (void)commentMediaControllerDidSwipe:(id)a0 didSwipeToIndex:(long long)a1 previousIndex:(long long)a2;
- (void)commentMediaControllerTextExpand:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)invalidateLayout;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
