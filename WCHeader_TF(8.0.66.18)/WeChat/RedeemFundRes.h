@class NSString, LqtDialog, BaseResponse;

@interface RedeemFundRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) BOOL isRealtimeArrivial;
@property (nonatomic) BOOL isRedeemIntoPocket;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *wordingForStatus2;
@property (retain, nonatomic) NSString *preArriveTimeWording;
@property (nonatomic) unsigned int redeemFee;
@property (retain, nonatomic) NSString *bankName;
@property (retain, nonatomic) NSString *bankTail;
@property (retain, nonatomic) NSString *failureWording;
@property (retain, nonatomic) NSString *preArrivalTimeHeadline;
@property (retain, nonatomic) LqtDialog *dialog;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end
