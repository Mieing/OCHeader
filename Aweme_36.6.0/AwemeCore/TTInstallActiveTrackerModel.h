@class NSString;

@interface TTInstallActiveTrackerModel : TTInstallTrackerModel

@property (nonatomic) BOOL result;
@property (nonatomic) BOOL isAutoActivated;
@property (nonatomic) BOOL isActivated;
@property (nonatomic) long long startActivateTime;
@property (nonatomic) long long sendRequestTime;
@property (nonatomic) long long responseEndTime;
@property (nonatomic) long long retryCount;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *logid;

- (void).cxx_destruct;

@end
