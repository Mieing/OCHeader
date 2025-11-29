@class WCDataItem;

@interface WCAdPullCompareInfo : NSObject

@property (nonatomic) unsigned long long requestTime;
@property (nonatomic) BOOL timelinePullResponseFlag;
@property (retain, nonatomic) WCDataItem *timelinePullDataItem;
@property (nonatomic) BOOL adPullResponseFlag;
@property (retain, nonatomic) WCDataItem *adPullDataItem;

- (void).cxx_destruct;

@end
