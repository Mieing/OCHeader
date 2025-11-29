@class BaseRequest, NSString;

@interface AppointBankReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bankCardSeqno;
@property (retain, nonatomic) NSString *bankType;
@property (retain, nonatomic) NSString *timingId;

+ (void)initialize;

@end
