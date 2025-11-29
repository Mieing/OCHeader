@class NSString, NSMutableSet, WCFinderListLoadingStateModel, NSMutableArray, NSData;
@protocol WCFinderProfilePaidCollectionVMDelegate;

@interface WCFinderProfilePaidCollectionViewModel : WCFinderStreamProfilePageModel

@property (retain, nonatomic) WCFinderListLoadingStateModel *loadingState;
@property (retain, nonatomic) NSMutableArray *paidCollectionList;
@property (retain, nonatomic) NSMutableSet *collectionIDSet;
@property (weak, nonatomic) id<WCFinderProfilePaidCollectionVMDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSData *lastBuffer;

+ (BOOL)shouldDisplay:(id)a0;
+ (int)tabId;

- (id)viewPageClassName;
- (id)displayName;
- (long long)sectionType;
- (id)init;
- (BOOL)shouldDisplayTab;
- (void)requestPageData;
- (void)fetchFirstPageData;
- (void)fetchMoreData;
- (void)fetchData;
- (void)appendPaidCollections:(id)a0;
- (void)clearData;
- (id)dataSnapshot;
- (void)updateOverViewPaidCollectionSectionDataWithTotalCount:(long long)a0;
- (id)paidCollectionWithIndexPath:(id)a0;
- (BOOL)dataEmpty;
- (unsigned long long)dataCount;
- (id)reportParamsBlock;
- (void).cxx_destruct;

@end
