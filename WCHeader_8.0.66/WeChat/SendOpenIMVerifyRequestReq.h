@class NSString;

@interface SendOpenIMVerifyRequestReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tpUsername;
@property (retain, nonatomic) NSString *verifyContent;
@property (retain, nonatomic) NSString *antispamTicket;
@property (nonatomic) unsigned long long friendFlag;

+ (void)initialize;

@end
