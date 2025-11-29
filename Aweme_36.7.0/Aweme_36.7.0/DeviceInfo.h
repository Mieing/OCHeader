@class NSString;

@interface DeviceInfo : IESLivePBBaseMessage

@property (nonatomic) long long deviceId;
@property (copy, nonatomic) NSString *deviceModel;

+ (id)descriptor;

@end
