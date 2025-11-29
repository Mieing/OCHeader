@class NSDictionary, NSString, UICollectionView;

@interface IESLiveVSMessageBoardEmoticonPanelView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IESLiveCommentEmoticonPageViewDelegate>

@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ didOutput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commentEmoticonPageView:(id)a0 didSelectEmoticon:(id)a1;
- (id)initWithTrackParams:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupCollectionView;
- (void)setupViews;

@end
