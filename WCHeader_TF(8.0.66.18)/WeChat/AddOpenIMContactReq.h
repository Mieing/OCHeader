@class NSString, NSData;

@interface AddOpenIMContactReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tpUsername;
@property (retain, nonatomic) NSString *antispamTicket;
@property (nonatomic) unsigned long long friendFlag;
@property (retain, nonatomic) NSData *spamContext;

+ (void)initialize;

@end
