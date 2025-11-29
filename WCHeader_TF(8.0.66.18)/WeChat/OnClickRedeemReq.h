@class BaseRequest, NSString;

@interface OnClickRedeemReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int accountType;
@property (retain, nonatomic) NSString *newBindSerial;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end
