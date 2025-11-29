@class NSString, WCFinderFeedArray;
@protocol WCFinderFeedFlowViewAdapterDataSourceDelegate;

@interface WCFinderFeedFlowViewFeedArrayDataSource : NSObject <WCFinderFeedFlowViewAdapterDataSource, WCFinderFeedFlowViewDataSource>

@property (weak, nonatomic) id<WCFinderFeedFlowViewAdapterDataSourceDelegate> delegate;
@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observeChange:(id)a0;
- (void)release:(id)a0;
- (void)_onDataChanged;
- (BOOL)isEmpty;
- (id)getFeedArray;
- (id)feedAtIndexPath:(id)a0;
- (long long)feedIndexAtFeedArray:(id)a0;
- (id)feedIndexPathForTid:(id)a0;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)a0;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMOfTid:(id)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 cellConfigAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 indexPathOfTid:(id)a1;
- (void).cxx_destruct;

@end
