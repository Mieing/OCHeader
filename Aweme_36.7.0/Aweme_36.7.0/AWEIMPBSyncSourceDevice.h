@class NSString;

@interface AWEIMPBSyncSourceDevice : GPBMessage

@property (nonatomic) int appId;
@property (nonatomic) BOOL hasAppId;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL hasUserId;
@property (copy, nonatomic) NSString *deviceId;
@property (nonatomic) BOOL hasDeviceId;
@property (copy, nonatomic) NSString *platform;
@property (nonatomic) BOOL hasPlatform;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasVersion;

+ (id)descriptor;

@end
