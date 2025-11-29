@class NSString;

@interface TaskDetailInfo : NSObject

@property (copy, nonatomic) NSString *host;
@property (nonatomic) double start;
@property (nonatomic) double end;
@property (nonatomic) long long netError;
@property (nonatomic) long long httpCode;
@property (copy, nonatomic) NSString *dispatchedHost;
@property (nonatomic) double dispatchTime;
@property (nonatomic) BOOL sentAlready;

- (void).cxx_destruct;
- (id)init;

@end
