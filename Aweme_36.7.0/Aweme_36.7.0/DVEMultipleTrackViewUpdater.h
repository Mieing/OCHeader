@class NSArray;

@interface DVEMultipleTrackViewUpdater : NSObject

@property (copy, nonatomic) NSArray *curDifSections;

- (id)diff:(id)a0 new:(id)a1;
- (void)resetDiffOldValue;
- (void)performBatchUpdates:(id)a0 forCollectionView:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)diff:(id)a0;

@end
