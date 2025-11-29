@class NSString, NSData, NSMutableSet, NSMutableArray;
@protocol WCFinderLikeListViewModelDelegate;

@interface WCFinderLikeListViewModel : NSObject <WCFinderDataItemExt>

@property (retain, nonatomic) NSMutableArray *dataItems;
@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL isForbidFetchMore;
@property (weak, nonatomic) id<WCFinderLikeListViewModelDelegate> delegate;
@property (readonly, nonatomic) unsigned long long refreshTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFinderDataItem:(id)a0 lastBuffer:(id)a1;
- (void)getLocalFinderDataItem;
- (id)transformDataItems:(id)a0;
- (void)forbidFetchMore;
- (void)fetchMoreLikeList;
- (long long)contentIndexOfTid:(id)a0;
- (id)contentVMWithTid:(id)a0;
- (void)onFinderDataItemDelete:(id)a0;
- (void).cxx_destruct;

@end
