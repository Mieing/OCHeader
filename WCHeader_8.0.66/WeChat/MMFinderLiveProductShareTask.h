@class WCFinderDataItem, NSString, WCFinderLiveProductShareItem;

@interface MMFinderLiveProductShareTask : MMFinderLiveECBaseShareTask

@property (retain, nonatomic) WCFinderDataItem *finderDataItem;
@property (nonatomic) unsigned long long productID;
@property (nonatomic) unsigned long long realProductId;
@property (copy, nonatomic) NSString *ecSource;
@property (nonatomic) BOOL tryCurrentLiveIfSameAnchor;
@property (copy, nonatomic) NSString *promoterKey;
@property (nonatomic) unsigned long long cpsProductId;
@property (retain, nonatomic) WCFinderLiveProductShareItem *productShareItem;
@property (nonatomic) unsigned int scene;
@property (nonatomic) BOOL ignoreClickShareCommodityReport;
@property (copy, nonatomic) id /* block */ onGetData;

+ (id)task;

- (id)init;
- (unsigned long long)getCurrentProductId;
- (void).cxx_destruct;

@end
