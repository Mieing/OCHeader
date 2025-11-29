@class NSString;

@interface EXTPKG_mmpayapplynfccardbo_ExistOrderInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *outTradeNo;
@property (nonatomic) long long orderExpireTime;
@property (nonatomic) int tradeState;
@property (retain, nonatomic) NSString *continueTitle;
@property (retain, nonatomic) NSString *continueDesc;
@property (retain, nonatomic) NSString *endApplyTitle;
@property (retain, nonatomic) NSString *endApplyDesc;

+ (void)initialize;

@end
