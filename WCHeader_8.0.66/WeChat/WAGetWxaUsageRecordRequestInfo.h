@class NSString, TencentLBSLocation;

@interface WAGetWxaUsageRecordRequestInfo : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *SSIDHash;
@property (retain, nonatomic) NSString *BSSIDHash;
@property (retain, nonatomic) TencentLBSLocation *location;
@property (nonatomic) unsigned int requestTime;
@property (nonatomic) unsigned int explicitRequestType;

- (void).cxx_destruct;

@end
