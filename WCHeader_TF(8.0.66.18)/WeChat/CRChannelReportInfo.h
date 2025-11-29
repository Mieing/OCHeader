@class NSString;

@interface CRChannelReportInfo : NSObject

@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *channelVersion;
@property (nonatomic) long long sceneID;
@property (copy, nonatomic) NSString *uinType;
@property (copy, nonatomic) NSString *uin;
@property (copy, nonatomic) NSString *gameAppID;
@property (copy, nonatomic) NSString *scenePopTime;
@property (copy, nonatomic) NSString *packageID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *appID;

- (id)toDictionary;
- (id)description;
- (void).cxx_destruct;

@end
