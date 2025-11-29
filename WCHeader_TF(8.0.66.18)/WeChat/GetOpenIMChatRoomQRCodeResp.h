@class NSData, NSString, BaseResponse;

@interface GetOpenIMChatRoomQRCodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *qrcode;
@property (retain, nonatomic) NSString *footerWording;

+ (void)initialize;

@end
