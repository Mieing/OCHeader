@class NSString;

@interface TTInstallRegisterTrackerModel : TTInstallTrackerModel

@property (nonatomic) int retryCount;
@property (nonatomic) BOOL isFrist;
@property (nonatomic) BOOL didChange;
@property (copy, nonatomic) NSString *fromScene;
@property (nonatomic) BOOL result;
@property (nonatomic) long long requestType;
@property (nonatomic) BOOL egdiResult;
@property (copy, nonatomic) NSString *exception;
@property (copy, nonatomic) NSString *logid;
@property (nonatomic) long long stratRegisterTime;
@property (nonatomic) long long sendRequestTime;
@property (nonatomic) long long recvResponseTime;
@property (nonatomic) long long serializeResponseTime;
@property (nonatomic) long long didCallbackTime;

- (void).cxx_destruct;

@end
