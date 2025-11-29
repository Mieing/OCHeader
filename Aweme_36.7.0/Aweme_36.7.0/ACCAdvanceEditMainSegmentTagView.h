@class NSDictionary, ACCAdvanceEditMainTrackDataSource, NSString;
@protocol ACCAdvanceEditMainSegmentTagDelegate;

@interface ACCAdvanceEditMainSegmentTagView : UICollectionView <UICollectionViewDataSource>

@property (retain, nonatomic) ACCAdvanceEditMainTrackDataSource *mainDataSource;
@property (retain, nonatomic) NSDictionary *tagViewPool;
@property (nonatomic) long long certainSlotFrameCount;
@property (nonatomic) BOOL isExtend;
@property (weak, nonatomic) id<ACCAdvanceEditMainSegmentTagDelegate> uiConfigDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (id)initWithDataSource:(id)a0 flowLayout:(id)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)initData;

@end
