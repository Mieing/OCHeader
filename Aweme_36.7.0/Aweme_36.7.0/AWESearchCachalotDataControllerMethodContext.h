@class AWESearchPreNetworkRequest, NSString, CachalotNetworkDurationMonitor, NSDictionary, NSDate, NSNumber, NSError;

@interface AWESearchCachalotDataControllerMethodContext : NSObject

@property (retain, nonatomic) NSString *currDateString;
@property (retain, nonatomic) NSDate *requestStartTime;
@property (retain, nonatomic) NSString *searchType;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) CachalotNetworkDurationMonitor *monitor;
@property (retain, nonatomic) NSNumber *requestTimestamp;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long cardCount;
@property (nonatomic) double flowInitTaskTimeStamp;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSString *preRequestTag;
@property (nonatomic) BOOL preRequestHit;
@property (retain, nonatomic) AWESearchPreNetworkRequest *preRequest;
@property (nonatomic) unsigned long long preRequestCode;
@property (retain, nonatomic) NSString *preRequestErrorMsg;

- (void).cxx_destruct;

@end
