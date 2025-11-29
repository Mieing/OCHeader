@class NSString;

@interface ViewGuestInfo : IESLivePBBaseMessage

@property (nonatomic) long long deviceId;
@property (copy, nonatomic) NSString *deviceType;

+ (id)descriptor;

@end
