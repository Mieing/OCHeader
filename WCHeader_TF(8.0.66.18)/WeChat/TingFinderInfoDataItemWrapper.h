@class WCFinderDataItem, NSError, MMListenFinderInfo;

@interface TingFinderInfoDataItemWrapper : MMObject

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) MMListenFinderInfo *finderInfo;

- (void).cxx_destruct;

@end
