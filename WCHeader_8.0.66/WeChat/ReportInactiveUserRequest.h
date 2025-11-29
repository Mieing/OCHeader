@class AndroidDeviceInfo, BaseRequest, NSString, IosDeviceInfo;

@interface ReportInactiveUserRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *lang;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) AndroidDeviceInfo *androidDeviceInfo;
@property (retain, nonatomic) IosDeviceInfo *iosDeviceInfo;

+ (void)initialize;

@end
