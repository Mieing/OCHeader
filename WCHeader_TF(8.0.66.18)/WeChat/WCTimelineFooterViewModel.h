@class WCDataItem, WCMomentsPostReportSession, WCMomentsPageContext, WCMicroMerchantMoreViewModel, WCMomentsFinderShareViewModel, NSObject, WCMomentsPoiShareViewModel;
@protocol WCTimelineFooterItemViewModel;

@interface WCTimelineFooterViewModel : NSObject

@property (readonly, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCMomentsPostReportSession *postSession;
@property (retain, nonatomic) WCMomentsPageContext *pageContext;
@property (readonly, nonatomic) NSObject<WCTimelineFooterItemViewModel> *displayedViewModel;
@property (readonly, nonatomic) WCMicroMerchantMoreViewModel *microMerchantMoreViewModel;
@property (readonly, nonatomic) WCMomentsFinderShareViewModel *finderShareViewModel;
@property (readonly, nonatomic) WCMomentsPoiShareViewModel *poiShareViewModel;

- (id)initWithDataItem:(id)a0 pageContext:(id)a1;
- (void)determineDisplayedViewModel;
- (void)willDisplayFooterCell;
- (void).cxx_destruct;

@end
