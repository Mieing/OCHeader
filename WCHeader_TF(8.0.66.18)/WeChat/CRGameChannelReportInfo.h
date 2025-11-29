@class NSString;

@interface CRGameChannelReportInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *channel;
@property (retain, nonatomic) NSString *channelVersion;
@property (nonatomic) unsigned long long sceneId;
@property (retain, nonatomic) NSString *uinType;
@property (retain, nonatomic) NSString *uin;
@property (retain, nonatomic) NSString *gameAppid;
@property (nonatomic) long long scenePopTime;
@property (retain, nonatomic) NSString *packageId;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSString *extra;
@property (retain, nonatomic) NSString *channelV2;
@property (retain, nonatomic) NSString *sceneName;
@property (retain, nonatomic) NSString *subSceneName;

+ (void)initialize;

@end
