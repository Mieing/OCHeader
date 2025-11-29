@class NSString;

@interface KSUPnPDiscoveryRequest : NSObject

@property (copy, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSString *host;
@property (nonatomic) long long port;
@property (copy, nonatomic) NSString *man;
@property (copy, nonatomic) NSString *searchTarget;
@property (copy, nonatomic) NSString *userAgent;
@property (nonatomic) unsigned long long maximumResponseDelay;
@property (nonatomic) double socketSendTimeoutInterval;
@property (nonatomic) double socketReceiveTimeoutInterval;

- (id)init;
- (id)generateRequestData;
- (void).cxx_destruct;

@end
