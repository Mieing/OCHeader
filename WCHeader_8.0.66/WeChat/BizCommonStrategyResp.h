@class BizStrategyControlInfo, MassSendHideInfo, BaseResponse;

@interface BizCommonStrategyResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) BizStrategyControlInfo *defaultControlInfo;
@property (retain, nonatomic) MassSendHideInfo *masssendHideInfo;

+ (void)initialize;

@end
