@class AWEProfileHeaderMyProfileView, AWEProfileHeaderContext, NSString;
@protocol AWEMyProfileViewControllerDelegate;

@interface AWEProfileHeaderMyProfileViewController : AWEBaseListViewController <AWEProfileHeaderUpstairHintActionDelegate, AWEProfileHeaderFollowAreaActionDelegate, AFDProfileAvatarZoomTransitionOuterContextProvider, AWEProfileHeaderContentViewControllerProtocol>

@property (retain, nonatomic) AWEProfileHeaderMyProfileView *headerView;
@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (weak, nonatomic) id<AWEMyProfileViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;
+ (Class)collectionViewClass;

- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (id)zoomTransitionStartView;
- (void)setupBind;
- (void)updateProfileCompletion:(float)a0 hidePercentWhenCompleted:(BOOL)a1;
- (void)scrollViewDidScrollWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollViewDidEndDragingWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)updateNavBtnAlpha:(double)a0;
- (void)refreshAlphaForHeaderView:(double)a0;
- (void)refreshHeaderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isCurrentViewControllerSticky;
- (void)relationBtnClickedWithTag:(long long)a0;
- (double)heightOfListView;
- (void)scrollViewBeginDraging;
- (void)onWillUpdateLayoutAnimate;
- (void)onCompleteUpdateLayoutAnimate;
- (void)configWithContext:(id)a0 user:(id)a1 useCache:(BOOL)a2;
- (double)heightAboveTopCornerSeparatorOfListView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfBGCorner;
- (void)sendMsgBtnClicked:(id)a0;
- (void)handleFollowAreaActionWithType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;
- (BOOL)useCache;
- (void)setupCollectionView:(id)a0;

@end
