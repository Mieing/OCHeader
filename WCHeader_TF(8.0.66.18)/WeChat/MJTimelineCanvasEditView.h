@class MJTimelineCanvasEditViewModel, UICollectionView, NSString, MMUIButton;
@protocol MJTimelineCanvasEditViewDelegate;

@interface MJTimelineCanvasEditView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) MJTimelineCanvasEditViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *canvasCollectionView;
@property (retain, nonatomic) MMUIButton *contentScaleModeButton;
@property (weak, nonatomic) id<MJTimelineCanvasEditViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)setupViews;
- (void)layoutViews;
- (void)bindViews;
- (void)contentScaleModeButtonDidTouchUpInside:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)updateCellSelection;
- (void).cxx_destruct;

@end
