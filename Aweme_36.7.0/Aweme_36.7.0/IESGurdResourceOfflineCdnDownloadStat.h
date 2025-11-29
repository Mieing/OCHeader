@class NSString;

@interface IESGurdResourceOfflineCdnDownloadStat : NSObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long duration;
@property (nonatomic) long long status;
@property (nonatomic) long long retryTimes;

- (void).cxx_destruct;

@end
