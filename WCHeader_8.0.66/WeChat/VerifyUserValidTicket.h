@class NSString;

@interface VerifyUserValidTicket : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *antispamticket;

+ (void)initialize;

- (void)setAntispamticket:(id)a0;
- (id)antispamticket;
- (void)setUsername:(id)a0;
- (id)username;

@end
