@class LoginQRCodeNotifyPkg, BaseResponse;

@interface CheckLoginQRCodeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) LoginQRCodeNotifyPkg *notifyPkg;

+ (void)initialize;

@end
