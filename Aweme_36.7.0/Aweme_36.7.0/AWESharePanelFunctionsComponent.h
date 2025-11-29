@class UIStackView, NSArray, NSMutableArray, NSString, UIView, NSDate, AWESharePanelFunctionsDataManager;

@interface AWESharePanelFunctionsComponent : AWEIMComponentBase <AWESharePanelComponentViewProtocol, UICollectionViewDelegate, UICollectionViewDataSource, AWESharePanelFunctionInterface>

@property (retain, nonatomic) UIView *componentView;
@property (retain, nonatomic) UIStackView *collectionListView;
@property (retain, nonatomic) NSArray *collectionViewList;
@property (retain, nonatomic) AWESharePanelFunctionsDataManager *dataManager;
@property (retain, nonatomic) NSDate *functionLoadFinishTime;
@property (retain, nonatomic) NSMutableArray *hasShowedFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_afterFirstRender;
- (double)componentHeight;
- (id)shouldRecognizeAsynchronousWithGestures;
- (long long)currentFunctionSectionCount;
- (void)createCollectionViewList;
- (double)cellTopBottomInsetValue;
- (long long)indexOfCollectionView:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)dealloc;

@end
