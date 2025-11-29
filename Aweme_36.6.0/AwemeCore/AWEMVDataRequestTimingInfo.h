@class AWENetworkPerfromanceMetrics, NSDictionary, NSDate;

@interface AWEMVDataRequestTimingInfo : NSObject

@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) NSDate *willRequestDate;
@property (retain, nonatomic) NSDate *onReceiveResponseDictDate;
@property (retain, nonatomic) NSDate *onFirstShardingDataParsedDate;
@property (retain, nonatomic) NSDate *onReceiveResponseModelDate;
@property (retain, nonatomic) NSDate *willFilterResponseDate;
@property (retain, nonatomic) NSDate *didFilterResponseBeginDate;
@property (retain, nonatomic) NSDate *didFilterResponseEndDate;
@property (retain, nonatomic) NSDate *requestWillCompleteDate;
@property (retain, nonatomic) NSDate *requestDidCompleteDate;
@property (retain, nonatomic) AWENetworkPerfromanceMetrics *metrics;
@property (copy, nonatomic) NSDictionary *trackParamsFromFetcher;

- (double)requestDurationMS;
- (void).cxx_destruct;
- (BOOL)isComplete;

@end
