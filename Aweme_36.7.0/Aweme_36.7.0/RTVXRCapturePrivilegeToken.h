@class NSString;

@interface RTVXRCapturePrivilegeToken : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double requestTimestamp;
@property (nonatomic) long long captureDeviceType;
@property (copy, nonatomic) NSString *requestReason;
@property (copy, nonatomic) NSString *roomID;
@property (readonly, nonatomic) BOOL expired;

+ (id)requestTokenWithCaptureDeviceType:(long long)a0 reason:(id)a1;

- (void)markExpired;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(long long)a0 reason:(id)a1;

@end
