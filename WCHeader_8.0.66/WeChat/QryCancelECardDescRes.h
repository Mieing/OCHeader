@class TradeDetailItem, NSString, CancelDescItem, BaseResponse;

@interface QryCancelECardDescRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *pageTitle;
@property (retain, nonatomic) NSString *logoUrl;
@property (retain, nonatomic) NSString *cancelTitle;
@property (retain, nonatomic) CancelDescItem *cancelDescItem;
@property (retain, nonatomic) NSString *cancelTips;
@property (retain, nonatomic) NSString *bindSerial;
@property (retain, nonatomic) NSString *bankType;
@property (retain, nonatomic) NSString *cancelSuccDesc;
@property (retain, nonatomic) TradeDetailItem *tradeDetailItem;

+ (void)initialize;

@end
