@class NSString, WCDataItem, WCMomentsPageContext;

@interface WCMicroMerchantMoreViewModel : NSObject <WCTimelineFooterItemViewModel>

@property (nonatomic) BOOL isMicroMerchantFold;
@property (nonatomic) unsigned long long feedCount;
@property (nonatomic) BOOL hasMoreFeeds;
@property (copy, nonatomic) NSString *moreText;
@property (readonly, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCMomentsPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
