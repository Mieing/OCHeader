@class NSString, BaseResponse;

@interface BusiF2FZeroCallBackResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned int notSureFlag;

+ (void)initialize;

@end
