@class WCFinderPoiGroupBuyListOpenParams, NSString, NSMutableArray;
@protocol WCFinderPoiGroupBuyListViewModelDelegate;

@interface WCFinderPoiGroupBuyListViewModel : NSObject

@property (retain, nonatomic) WCFinderPoiGroupBuyListOpenParams *openParams;
@property (nonatomic) BOOL hasFetchData;
@property (nonatomic) BOOL isRequesting;
@property (copy, nonatomic) NSString *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *groupBuyArray;
@property (weak, nonatomic) id<WCFinderPoiGroupBuyListViewModelDelegate> delegate;
@property (readonly, nonatomic) BOOL hasMoreData;

- (id)initWithOpenParams:(id)a0;
- (void)requestDataFromTop;
- (void)requestNextData;
- (void)requestDataWithPullType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
