@class NSString, EXTPKG_mmpayapplynfccardbo_CardPasskitInfo, BaseResponse;

@interface OrderQueryOrderResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) int tradeState;
@property (retain, nonatomic) NSString *tradeStateDesc;
@property (retain, nonatomic) NSString *successTime;
@property (retain, nonatomic) EXTPKG_mmpayapplynfccardbo_CardPasskitInfo *cardPasskitInfo;
@property (retain, nonatomic) NSString *endApplyTitle;
@property (retain, nonatomic) NSString *endApplyDesc;

+ (void)initialize;

@end
