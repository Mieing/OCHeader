@class AndroidDeviceInfo, BaseRequest, NSString, IosDeviceInfo;

@interface PullUserMessageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *lang;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) AndroidDeviceInfo *androidDeviceInfo;
@property (retain, nonatomic) IosDeviceInfo *iosDeviceInfo;
@property (nonatomic) unsigned int remainReddotNumber;
@property (retain, nonatomic) NSString *transData;

+ (void)initialize;

@end
