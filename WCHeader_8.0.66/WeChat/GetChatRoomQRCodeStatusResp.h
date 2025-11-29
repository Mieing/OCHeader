@class NSMutableArray, BaseResponse;

@interface GetChatRoomQRCodeStatusResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *qrcodeList;

+ (void)initialize;

@end
