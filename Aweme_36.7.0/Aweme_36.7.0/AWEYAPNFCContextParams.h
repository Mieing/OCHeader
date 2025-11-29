@class NSString;

@interface AWEYAPNFCContextParams : NSObject

@property (copy, nonatomic) NSString *originURL;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *industryCode;
@property (nonatomic) BOOL isColdLaunch;
@property (nonatomic) BOOL isRetry;
@property (copy, nonatomic) NSString *retryScene;
@property (nonatomic) double launchStartTime;
@property (nonatomic) double sessionStartTime;

- (id)nfcContextTrackParams;
- (void).cxx_destruct;

@end
