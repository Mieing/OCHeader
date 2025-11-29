@class NSString, BaseResponse;

@interface ApplyForPhoneNumberTicketResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *mobileTicket;

+ (void)initialize;

@end
