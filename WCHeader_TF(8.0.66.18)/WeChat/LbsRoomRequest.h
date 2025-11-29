@class BaseRequest, NSString;

@interface LbsRoomRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opCode;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) int precision;
@property (retain, nonatomic) NSString *macAddr;
@property (retain, nonatomic) NSString *cellId;
@property (nonatomic) int gpssource;
@property (retain, nonatomic) NSString *roomName;
@property (nonatomic) int exitScene;
@property (nonatomic) int stayTime;

+ (void)initialize;

@end
