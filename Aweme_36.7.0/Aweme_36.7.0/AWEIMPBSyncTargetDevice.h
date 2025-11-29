@class NSString;

@interface AWEIMPBSyncTargetDevice : GPBMessage

@property (nonatomic) int appId;
@property (nonatomic) BOOL hasAppId;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL hasUserId;
@property (copy, nonatomic) NSString *deviceId;
@property (nonatomic) BOOL hasDeviceId;

+ (id)descriptor;

@end
