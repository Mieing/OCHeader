@class NSString, NSMutableSet, WCFinderListLoadingStateModel, NSMutableArray, NSData;
@protocol WCFinderPaidCollectionListVMDelegate;

@interface WCFinderPaidCollectionListVM : NSObject

@property (retain, nonatomic) NSMutableArray *paidCollectionList;
@property (retain, nonatomic) NSMutableSet *paidCollectionIDSet;
@property (copy, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) WCFinderListLoadingStateModel *loadingState;
@property (weak, nonatomic) id<WCFinderPaidCollectionListVMDelegate> delegate;
@property (copy, nonatomic) NSData *lastBuffer;

- (id)initWithFinderUsername:(id)a0;
- (void)fetchFirstPageData;
- (void)fetchMoreData;
- (void)fetchData;
- (void)appendPaidCollections:(id)a0;
- (id)dataSnapshot;
- (id)paidCollectionWithIndexPath:(id)a0;
- (void)clearData;
- (BOOL)dataEmpty;
- (unsigned long long)dataCount;
- (void).cxx_destruct;

@end
