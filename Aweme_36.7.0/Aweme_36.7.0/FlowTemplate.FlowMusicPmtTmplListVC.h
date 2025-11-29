@interface FlowTemplate.FlowMusicPmtTmplListVC : FlowCommon.FlowBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_player;
    void /* unknown type, empty encoding */ delegatorMap;
    void /* unknown type, empty encoding */ playList;
    void /* unknown type, empty encoding */ entrance;
    void /* unknown type, empty encoding */ needNavBar;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ actionDelegate;
    void /* unknown type, empty encoding */ currentCell;
    void /* unknown type, empty encoding */ currentIndex;
    void /* unknown type, empty encoding */ dismissAnimationInfo;
    void /* unknown type, empty encoding */ margin;
    void /* unknown type, empty encoding */ itemSpacing;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_retryView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadFooterView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_centerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
    void /* unknown type, empty encoding */ hasExposed;
    void /* unknown type, empty encoding */ tmplTrack;
    void /* unknown type, empty encoding */ didSelectTmplBlock;
    void /* unknown type, empty encoding */ isMusicViewAppearing;
}

- (id)flow_trackParametersWith:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)loadMoreAction;
- (void)handleNavBarTapGestureRecognizer;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
