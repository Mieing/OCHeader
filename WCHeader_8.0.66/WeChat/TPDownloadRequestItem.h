@class NSString;

@interface TPDownloadRequestItem : NSObject

@property (copy, nonatomic) NSString *urlStr;
@property (nonatomic) int retryTimes;
@property (nonatomic) double failedTimeStamp;
@property (nonatomic) int type;

- (id)init;
- (void).cxx_destruct;

@end
