@class NSString, BaseResponse;

@interface PayIBGQuickGetOverseaWalletResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *payWalletWxappH5Url;
@property (nonatomic) unsigned int cacheTime;
@property (nonatomic) unsigned int localStorageTime;

+ (void)initialize;

@end
