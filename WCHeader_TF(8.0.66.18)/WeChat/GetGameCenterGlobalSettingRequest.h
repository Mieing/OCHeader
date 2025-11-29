@class AndroidDeviceInfo, BaseRequest, NSString, IosDeviceInfo;

@interface GetGameCenterGlobalSettingRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *lang;
@property (retain, nonatomic) NSString *country;
@property (nonatomic) unsigned int releaseChannel;
@property (retain, nonatomic) AndroidDeviceInfo *androidDeviceInfo;
@property (retain, nonatomic) IosDeviceInfo *iosDeviceInfo;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
