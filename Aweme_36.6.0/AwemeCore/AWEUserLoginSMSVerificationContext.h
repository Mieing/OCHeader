@class DYASecurityTicketModel, NSDictionary, NSString;

@interface AWEUserLoginSMSVerificationContext : NSObject

@property (retain, nonatomic) DYASecurityTicketModel *ticketModel;
@property (retain, nonatomic) NSDictionary *extraDict;
@property (copy, nonatomic) NSString *autoSendAccountSource;

- (id)initWithTicketModel:(id)a0 extraDict:(id)a1 autoSendAccountSource:(id)a2;
- (void).cxx_destruct;

@end
