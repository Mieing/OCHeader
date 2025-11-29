@class BaseResponse, NSString, NSData, ButtonInfo;

@interface BusiF2FPayOkResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) ButtonInfo *btnInfo;
@property (retain, nonatomic) NSData *actInfo;

+ (void)initialize;

@end
