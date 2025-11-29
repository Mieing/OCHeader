@class IESLiveEmptyView, UIView, NSString, HTSEventForwardingView, IESLiveButton, IGListAdapter, UICollectionView, UILabel, IESLiveUGCVideoSelectPanelViewModel;

@interface IESLiveUGCVideoSelectPanel : UIView <UICollectionViewDelegate, IGListAdapterDataSource>

@property (retain, nonatomic) IESLiveUGCVideoSelectPanelViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UIView *cutLine;
@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) IESLiveButton *previewButton;
@property (retain, nonatomic) IESLiveButton *chooseButton;
@property (retain, nonatomic) IESLiveEmptyView *ugcEmptyView;
@property (retain, nonatomic) IESLiveEmptyView *fullEmptyView;
@property (retain, nonatomic) HTSEventForwardingView *emptyBGView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionViewInset;
- (void)loadMoreDone:(BOOL)a0;
- (void)addLoadMoreBlock:(id /* block */)a0;
- (void)didClickPreviewButton;
- (void)didClickChooseMVButton;
- (void)videoPanelWillShowWithParams:(id)a0;
- (void)videoPanelDidShow;
- (void)videoPanelWillHide;
- (void)videoPanelDidHide;
- (void).cxx_destruct;
- (void)setupUI;
- (void)addObservers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
