@class WCFinderLocationInfo, NSString, NSData, NSMutableSet, NSMutableArray, WCFinderDataItem;
@protocol WCFinderNearbyRelatedViewModelDelegate;

@interface WCFinderNearbyRelatedViewModel : NSObject <WCFinderPostDataItemExt, WCFinderDataItemExt>

@property (nonatomic) unsigned long long refreshTime;
@property (retain, nonatomic) NSMutableArray *allDataItems;
@property (nonatomic) BOOL isEnableContinueFetch;
@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (retain, nonatomic) NSData *lastBuff;
@property (retain, nonatomic) WCFinderDataItem *enterDataItem;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) WCFinderLocationInfo *locationInfo;
@property (nonatomic) BOOL isFetchingData;
@property (weak, nonatomic) id<WCFinderNearbyRelatedViewModelDelegate> delegate;
@property (readonly, nonatomic) NSString *enterFeedTid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataItem:(id)a0 isFromSNSPoi:(BOOL)a1 location:(id)a2;
- (void)dealloc;
- (void)addContentVM:(id)a0;
- (BOOL)isEnableFetchNextPage;
- (void)fetchRelatedFirstPage;
- (void)fetchMoreNearbyRelated;
- (void)appendFinderContentVM:(id)a0;
- (id)transformDataItems:(id)a0;
- (unsigned long long)firstPageRefreshTime;
- (unsigned long long)dataSourceItemCount;
- (long long)contentIndexOfTid:(id)a0;
- (id)contentVMWithTid:(id)a0;
- (id)contentVMAtIndex:(long long)a0;
- (int)feedViewControllerScene;
- (BOOL)deleteDataItemWithIndex:(unsigned long long)a0 tid:(id)a1;
- (void)onFinderDataItemDelete:(id)a0;
- (void)onFinderPostSessionUpLoadSuccessful:(id)a0;
- (void)onPostDataItemFailed:(id)a0;
- (void).cxx_destruct;

@end
