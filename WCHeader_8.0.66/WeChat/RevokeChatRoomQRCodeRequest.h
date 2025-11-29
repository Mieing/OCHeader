@class BaseRequest, NSString;

@interface RevokeChatRoomQRCodeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *qrcode;
@property (retain, nonatomic) NSString *chatRoomUserName;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
