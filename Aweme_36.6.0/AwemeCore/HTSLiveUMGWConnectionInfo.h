@class NSString;

@interface HTSLiveUMGWConnectionInfo : GPBMessage

@property (nonatomic) long long fetchInterval;
@property (nonatomic) int fetchType;
@property (copy, nonatomic) NSString *wssURL;
@property (nonatomic) long long heartbeatDuration;
@property (copy, nonatomic) NSString *wssURLV2;

+ (id)descriptor;

@end
