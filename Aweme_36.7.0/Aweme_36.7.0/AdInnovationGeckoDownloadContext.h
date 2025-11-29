@class NSString, NSError;

@interface AdInnovationGeckoDownloadContext : NSObject

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) BOOL success;
@property (nonatomic) long long downloadDuration;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
