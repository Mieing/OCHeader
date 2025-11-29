@class NSString, NSData, MigrateMsgProtocol, BaseResponse;

@interface MigrateMsgUploadKeyResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *qrcode;
@property (retain, nonatomic) NSData *qrcodeBuf;
@property (retain, nonatomic) MigrateMsgProtocol *protocol;

+ (void)initialize;

@end
