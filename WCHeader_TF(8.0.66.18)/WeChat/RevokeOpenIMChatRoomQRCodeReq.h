@class NSString;

@interface RevokeOpenIMChatRoomQRCodeReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *roomName;
@property (retain, nonatomic) NSString *qrcode;

+ (void)initialize;

@end
