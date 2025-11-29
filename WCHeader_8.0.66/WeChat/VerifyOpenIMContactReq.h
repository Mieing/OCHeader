@class NSString;

@interface VerifyOpenIMContactReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tpUsername;
@property (retain, nonatomic) NSString *verifyTicket;
@property (nonatomic) unsigned long long friendFlag;

+ (void)initialize;

@end
