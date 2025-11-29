@class WecoinTaxReConfirmHalfPageInfo, EncashResultPageInfo, RetryInfo, BaseResponse;

@interface EncashIncomeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) EncashResultPageInfo *resultPageInfo;
@property (retain, nonatomic) WecoinTaxReConfirmHalfPageInfo *taxReconfirmInfo;
@property (retain, nonatomic) RetryInfo *retryInfo;

+ (void)initialize;

@end
