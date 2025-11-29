@class NSString;

@interface AWEPassportSendCodeTicketManager : NSObject

@property (copy, nonatomic) NSString *nextURL;
@property (copy, nonatomic) NSString *smsContent;
@property (copy, nonatomic) NSString *channelMobile;
@property (copy, nonatomic) NSString *verifyTicket;
@property (readonly, copy, nonatomic) NSString *nextURLWithTicket;

+ (id)sharedInstance;

- (void)setLatestTicket:(id)a0;
- (void).cxx_destruct;

@end
