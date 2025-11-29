@class BaseRequest, NSString;

@interface FacingCreateChatRoomRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opCode;
@property (retain, nonatomic) NSString *passWord;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) int precision;
@property (retain, nonatomic) NSString *macAddr;
@property (retain, nonatomic) NSString *cellId;
@property (nonatomic) int gpssource;
@property (retain, nonatomic) NSString *ticket;

+ (void)initialize;

@end
