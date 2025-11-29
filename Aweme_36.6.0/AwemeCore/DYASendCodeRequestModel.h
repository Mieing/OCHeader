@class NSString, DYASecurityTicketModel, NSDictionary;

@interface DYASendCodeRequestModel : NSObject

@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *oldPhoneNumber;
@property (nonatomic) long long type;
@property (nonatomic) long long scene;
@property (retain, nonatomic) DYASecurityTicketModel *ticketModel;
@property (retain, nonatomic) NSDictionary *extraParams;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
