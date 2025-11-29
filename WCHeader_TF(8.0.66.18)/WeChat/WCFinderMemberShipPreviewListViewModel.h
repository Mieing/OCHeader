@class NSString, NSData, NSMutableSet, NSMutableArray;
@protocol WCFinderMemberShipPreviewListViewModelDelegate;

@interface WCFinderMemberShipPreviewListViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *contentVMS;
@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long feedPageType;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL isFetchingData;
@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (nonatomic) unsigned long long collectionTopicId;
@property (weak, nonatomic) id<WCFinderMemberShipPreviewListViewModelDelegate> delegate;

- (id)initWithFinderUsername:(id)a0 feedPageType:(unsigned long long)a1 lastBuffer:(id)a2 collectionTopicId:(unsigned long long)a3;
- (void)updateState;
- (void)getLocalFirstPageData;
- (void)requestFirstPageData;
- (void)requestNextPageData;
- (void)requestDataWithPullType:(unsigned long long)a0;
- (void)requestCollectionInfoDataWithPullType:(unsigned long long)a0 lastBuff:(id)a1 isFirstPage:(BOOL)a2;
- (void)requestFeedDataWithPullType:(unsigned long long)a0 lastBuff:(id)a1 isFirstPage:(BOOL)a2;
- (void)onGetDataArray:(id)a0 pullFromTop:(BOOL)a1 lastBuff:(id)a2 continueFlag:(BOOL)a3;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewControllerPageId;
- (id)feedViewControllerViewId;
- (void).cxx_destruct;

@end
