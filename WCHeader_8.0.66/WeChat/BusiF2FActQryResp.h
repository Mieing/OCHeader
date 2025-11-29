@class NSString, ButtonInfo, BaseResponse;

@interface BusiF2FActQryResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) ButtonInfo *btnInfo;

+ (void)initialize;

@end
