@class NSString;

@interface VerifyUserValidTicket : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *antispamticket;

+ (void)initialize;

@end
