@class NSString;

@interface MMLiveConnectMicUserLocationDisplayInfo : NSObject

@property (copy, nonatomic) NSString *sdkUserId;
@property (copy, nonatomic) NSString *locationName;
@property (nonatomic) unsigned long long expiredTime;
@property (nonatomic) BOOL isOver;

- (void).cxx_destruct;

@end
