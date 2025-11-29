@class NSString, NSMutableArray;

@interface PageTicketElement : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userCardId;
@property (retain, nonatomic) NSString *ticketMchName;
@property (retain, nonatomic) NSString *ticketName;
@property (retain, nonatomic) NSString *ticketIcon;
@property (nonatomic) unsigned int ticketType;
@property (retain, nonatomic) NSMutableArray *ticketLabel;
@property (retain, nonatomic) NSString *ticketColor;
@property (retain, nonatomic) NSString *ticketBackUrl;

+ (void)initialize;

@end
