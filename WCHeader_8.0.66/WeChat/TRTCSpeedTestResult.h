@class NSString;

@interface TRTCSpeedTestResult : NSObject

@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *ip;
@property (nonatomic) long long quality;
@property (nonatomic) float upLostRate;
@property (nonatomic) float downLostRate;
@property (nonatomic) unsigned int rtt;
@property (nonatomic) long long availableUpBandwidth;
@property (nonatomic) long long availableDownBandwidth;
@property (nonatomic) long long upJitter;
@property (nonatomic) long long downJitter;

- (id)initWithCppParams:(const void *)a0;
- (id)description;
- (void).cxx_destruct;

@end
