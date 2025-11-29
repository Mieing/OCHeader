@class BaseRequest, NSString, NSMutableArray;

@interface GetChatRoomQRCodeStatusReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *roomname;
@property (retain, nonatomic) NSMutableArray *qrcodeList;

+ (void)initialize;

@end
