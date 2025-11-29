@class FinderLiveSquareStyleInfo, NSString, UICollectionView, WCFinderLiveHomePageSectionViewModel;

@interface WCFinderLiveHomePageBaseSectionView : UIView <WCFinderLiveHomePageSectionViewModelDelegate>

@property (retain, nonatomic) UICollectionView *collectionview;
@property (retain, nonatomic) WCFinderLiveHomePageSectionViewModel *vm;
@property (retain, nonatomic) FinderLiveSquareStyleInfo *styleInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleInfo:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)getVisibleFeedVM;
- (void)updateWithVM:(id)a0;
- (void)reloadData;
- (void)scrollToTop:(BOOL)a0;
- (id)generateCollectionView;
- (void)layoutSubViews_onFrameChanged;
- (void)bindExposeEventCallback:(id)a0 feedVM:(id)a1 indexPath:(id)a2;
- (void)reportFeedExpose:(id)a0 collectionView:(id)a1 indexPath:(id)a2;
- (void)reportFeedExposeEnd:(id)a0 collectionView:(id)a1 indexPath:(id)a2;
- (void)bindNewExposeReport:(id)a0 feedVM:(id)a1 indexPath:(id)a2;
- (id)getContainerSectionVisibleItemIndex;
- (void)onContainerSectionVMDisAppear;
- (void)onPlayStateChanged:(id)a0 state:(unsigned long long)a1;
- (void).cxx_destruct;

@end
