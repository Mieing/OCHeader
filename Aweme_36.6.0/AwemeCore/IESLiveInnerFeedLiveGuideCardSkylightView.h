@class IESLiveInnerFeedLiveGuideCardItemModel, NSArray, UICollectionView, NSString;

@interface IESLiveInnerFeedLiveGuideCardSkylightView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveInnerFeedLiveGuideCardItemModel *itemModel;
@property (retain, nonatomic) NSArray *feedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupDatas;
- (void)reloadWithItemModel:(id)a0;
- (id)visiableFeedItems;
- (id)visibleAnchorIds;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupCollectionView;
- (void)setupViews;

@end
