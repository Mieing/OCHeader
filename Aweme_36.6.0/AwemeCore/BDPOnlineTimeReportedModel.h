@class NSString;

@interface BDPOnlineTimeReportedModel : NSObject

@property (copy, nonatomic) NSString *hostType;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *serverId;
@property (nonatomic) double accumuTime;
@property (nonatomic) long long operation;
@property (nonatomic) double timeNode;
@property (nonatomic) double forceExitRestTime;
@property (nonatomic) double forceExitRestEndTime;
@property (nonatomic) double banEndTime;
@property (nonatomic) double curfewBeginTime;
@property (nonatomic) double curfewEndTime;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
