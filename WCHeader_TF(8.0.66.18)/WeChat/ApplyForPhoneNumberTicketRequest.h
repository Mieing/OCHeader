@class BaseRequest, NSString;

@interface ApplyForPhoneNumberTicketRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *mobileNumber;
@property (nonatomic) unsigned int businessId;

+ (void)initialize;

@end
