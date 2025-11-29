@class NSString;

@interface GeneralSetTicket : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *ticket;

+ (void)initialize;

@end
