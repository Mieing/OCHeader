@class BaseResponse, InterceptPopUp, NSData, WxPayUserTokenParams;

@interface PrepareIncomeEncashResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *ctxBuff;
@property (retain, nonatomic) WxPayUserTokenParams *tokenParams;
@property (retain, nonatomic) InterceptPopUp *interceptInfo;

+ (void)initialize;

@end
