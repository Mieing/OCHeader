@class NSString, BaseResponse;

@interface GetAppTicketResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *ticket;

+ (void)initialize;

@end
