@class HTSLiveGradientBackgroundView, NSArray, IESLivePlaybackHighlightDetailHorizonHeader, UICollectionView, HTSEventContext, NSString;

@interface IESLivePlaybackHighlightDetailCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) HTSLiveGradientBackgroundView *container;
@property (retain, nonatomic) IESLivePlaybackHighlightDetailHorizonHeader *headerTitle;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *list;
@property (nonatomic) unsigned long long selectIdx;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDataList:(id)a0 initialIndex:(unsigned long long)a1;
- (void)setupcollectionView;
- (void)dismissSelectCollectionView;
- (void)trackCellActionName:(id)a0 index:(unsigned long long)a1;
- (void)showSelectCollectionView;
- (double)collectionView:(id)a0 height:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)setup;

@end
