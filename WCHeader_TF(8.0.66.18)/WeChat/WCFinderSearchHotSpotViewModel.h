@class WCFinderHotSpotHistorySectionModel, WCFinderHotSpotTableViewSectionModel;
@protocol WCFinderSearchHotSpotViewModelDelegate;

@interface WCFinderSearchHotSpotViewModel : NSObject

@property (retain, nonatomic) WCFinderHotSpotHistorySectionModel *historySectionModel;
@property (retain, nonatomic) WCFinderHotSpotTableViewSectionModel *hotSpotSectionModel;
@property (nonatomic) BOOL hasClickShowMore;
@property (weak, nonatomic) id<WCFinderSearchHotSpotViewModelDelegate> delegate;

- (id)init;
- (void)loadData;
- (void)reloadHistoryData;
- (unsigned long long)historySectionDataCount;
- (BOOL)hasMoreHistoryData;
- (void)clickShowMore;
- (void).cxx_destruct;

@end
