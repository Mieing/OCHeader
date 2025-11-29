@class NSIndexPath, NSString, AWESearchDiscussTabCardModel, NSMutableDictionary, NSDictionary, UICollectionView, AWESearchCachalotResultContext, AWESearchTracker;
@protocol AWESearchDiscussTabCardViewModelDelegate;

@interface AWESearchDiscussTabCardViewModel : NSObject <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (retain, nonatomic) AWESearchDiscussTabCardModel *tabModel;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) AWESearchTracker *tracker;
@property (copy, nonatomic) NSString *previousKeyword;
@property (nonatomic) BOOL isTabSwitching;
@property (retain, nonatomic) NSMutableDictionary *sizeCache;
@property (weak, nonatomic) id<AWESearchDiscussTabCardViewModelDelegate> delegate;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWESearchCachalotResultContext *cachalotContext;
@property (copy, nonatomic) NSDictionary *logData;
@property (nonatomic) BOOL isSticky;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackResultShow;
- (void)prepareForReuseIfNeed;
- (void)updateWithTabCardModel:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
