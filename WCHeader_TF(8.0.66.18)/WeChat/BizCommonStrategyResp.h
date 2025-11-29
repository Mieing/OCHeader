@class BizStrategyControlInfo, MassSendHideInfo, BaseResponse;

@interface BizCommonStrategyResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) BizStrategyControlInfo *defaultControlInfo;
@property (retain, nonatomic) MassSendHideInfo *masssendHideInfo;

+ (void)initialize;

- (void)setMasssendHideInfo:(id)a0;
- (id)masssendHideInfo;
- (void)setDefaultControlInfo:(id)a0;
- (id)defaultControlInfo;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
