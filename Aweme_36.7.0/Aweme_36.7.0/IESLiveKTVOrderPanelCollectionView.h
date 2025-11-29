@class NSArray, NSString;
@protocol IESLiveKTVOrderPanelProtocol;

@interface IESLiveKTVOrderPanelCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>

@property (copy, nonatomic) NSArray *viewModelArray;
@property (weak, nonatomic) id<IESLiveKTVOrderPanelProtocol> panelModel;
@property (nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1 viewModelArray:(id)a2 panelModel:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1 viewModelArray:(id)a2 panelModel:(id)a3 diContext:(id)a4;
- (void)exitSearchMode;
- (void)scrollToTop;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)performUpdate;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupView;

@end
