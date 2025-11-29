@class UIView, NSString, NSDictionary, UICollectionView, UIScrollView, AWEIMPickerContext, AWEIMPickerConfiguration;

@interface AWEIMPickerViewController : AWEIMComponentViewController <AWEZoomTransitionOuterContextProvider, AWEIMComponentManagerDependency, AWEIMMediaDetailTransitionOuterContextProvider, AWEIMAlbumListViewControllerProtocol>

@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;
@property (retain, nonatomic) AWEIMPickerContext *componentContext;
@property (retain, nonatomic) AWEIMPickerConfiguration *configuration;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (retain, nonatomic) UICollectionView *currentDisplayCollectionView;
@property (retain, nonatomic) UIView *transitionBeginView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (double)zoomTransitionTargetViewCornerRadius;
- (id)mediaDetailTransitionStartView;
- (id)componentsNameArrayWithContext:(id)a0;
- (long long)currentSelectIndex;
- (long long)getIndexOfTagetCellInTransitionBackToPicker;
- (id)currentCollectionView;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)viewDidLoad;
- (void)loadView;

@end
