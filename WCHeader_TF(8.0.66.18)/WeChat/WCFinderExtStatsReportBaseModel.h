@class WCFinderDataItem, NSArray;

@interface WCFinderExtStatsReportBaseModel : NSObject

@property (nonatomic) int feedActionType;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) NSArray *jumpInfoReportList;

- (id)generateOtherKVsDictionary;
- (void).cxx_destruct;

@end
