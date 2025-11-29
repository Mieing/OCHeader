@class NSString, WCFinderFeedGroup, NSDiffableDataSourceSnapshot;
@protocol WCFinderFeedFlowViewAdapterDataSourceDelegate;

@interface WCFinderFeedFlowViewFeedGroupDataSource : NSObject <WCFinderFeedFlowViewAdapterDataSource, WCFinderFeedFlowViewDataSource>

@property (weak, nonatomic) id<WCFinderFeedFlowViewAdapterDataSourceDelegate> delegate;
@property (retain, nonatomic) WCFinderFeedGroup *feedGroup;
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observeChange:(id)a0;
- (void)release:(id)a0;
- (void)_onGroupChanged:(id)a0 snapshot:(id)a1 oldSnapshot:(id)a2;
- (BOOL)isEmpty;
- (id)getFeedArray;
- (id)feedAtIndexPath:(id)a0;
- (long long)feedIndexAtFeedArray:(id)a0;
- (id)feedIndexPathForTid:(id)a0;
- (BOOL)shouldPinSectionHeader:(long long)a0;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)a0;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMOfTid:(id)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 indexPathOfTid:(id)a1;
- (BOOL)finderFeedFlowView:(id)a0 isCustomSupplementaryViewOfKind:(id)a1 atSection:(long long)a2;
- (BOOL)finderFeedFlowView:(id)a0 isCustomCellAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 customCellAtIndexPath:(id)a1;
- (double)finderFeedFlowView:(id)a0 heightForCustomCellAtIndexPath:(id)a1 itemWidth:(double)a2;
- (id)finderFeedFlowView:(id)a0 customSupplementaryViewOfKind:(id)a1 atIndexPath:(id)a2;
- (double)finderFeedFlowView:(id)a0 heightForCustomSupplementaryViewOfKind:(id)a1 atSection:(long long)a2;
- (id)finderFeedFlowView:(id)a0 cellConfigAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
