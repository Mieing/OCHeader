@class NSString, WCTimeLineFooterView;
@protocol WCFinderVideoProducerLoadMoreViewDelegate;

@interface WCFinderVideoProducerLoadMoreView : UICollectionViewCell <MMRefreshTableFooterDelegate>

@property (nonatomic) double loadMoreThresholdOffset;
@property (retain, nonatomic) WCTimeLineFooterView *loadMoreFooterView;
@property (weak, nonatomic) id<WCFinderVideoProducerLoadMoreViewDelegate> delegate;
@property (copy, nonatomic) NSString *normalStateText;
@property (copy, nonatomic) NSString *errorStateText;
@property (copy, nonatomic) NSString *loadingStateText;
@property (copy, nonatomic) NSString *noDataStateText;
@property (copy, nonatomic) NSString *noMoreDataStateText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;

- (void)loadViewModel:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)updateForFooterOffset:(id)a0;
- (void)updateForScrolling:(id)a0;
- (void)updatePullRefreshState:(unsigned long long)a0 isError:(BOOL)a1;
- (unsigned long long)currentState;
- (void)updateloadMoreThresholdOffset:(double)a0;
- (void).cxx_destruct;

@end
