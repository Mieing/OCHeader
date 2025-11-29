@class WCFinderFeedListView, WCFinderFeedArray, NSString;
@protocol WCFinderFeedListPagerCellDelegate;

@interface WCFinderFeedListPagerCell : UICollectionViewCell <WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource>

@property (weak, nonatomic) id<WCFinderFeedListPagerCellDelegate> delegate;
@property (retain, nonatomic) WCFinderFeedListView *feedListView;
@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (nonatomic) unsigned long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForReuse;
- (void)updateFeedArray:(id)a0 index:(unsigned long long)a1;
- (void)curFeedHalfScreenIsShow:(BOOL)a0;
- (id)finderFeedListView:(id)a0 contentVMAtSection:(long long)a1;
- (id)finderFeedListView:(id)a0 contentVMOfTid:(id)a1;
- (void)finderFeedListView:(id)a0 dislikeContentVM:(id)a1;
- (long long)finderFeedListView:(id)a0 sectionOfTid:(id)a1;
- (long long)numberOfContentVMsInTableView;
- (BOOL)canShowSwipEdu;
- (BOOL)finderFeedListViewCanPreFetchData:(id)a0;
- (id)finderFeedListViewCurrentViewController:(id)a0;
- (BOOL)finderFeedListViewIsNoMoreData:(id)a0;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)a0;
- (void).cxx_destruct;

@end
