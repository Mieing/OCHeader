@class NSArray, NSDictionary;

@interface AWESearchScanHistoryDataController : NSObject

@property (retain, nonatomic) NSArray *historyModels;
@property (copy, nonatomic) NSDictionary *historyRequestParams;
@property (copy, nonatomic) NSArray *deleteHistoryIDs;

- (void)getScanHistoryRecond:(id)a0 completion:(id /* block */)a1;
- (void)deleteScanHistoryRecond:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
