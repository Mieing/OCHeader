@class BusiF2FFavorCommResp, NSString, ExtraBuyInfo, BaseResponse;

@interface BusiF2FGetFavorResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) BusiF2FFavorCommResp *favorCommResp;
@property (retain, nonatomic) ExtraBuyInfo *extraBuy;

+ (void)initialize;

@end
