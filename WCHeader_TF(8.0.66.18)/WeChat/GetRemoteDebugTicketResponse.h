@class NSString, BaseResponse;

@interface GetRemoteDebugTicketResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *loginTicket;

+ (void)initialize;

@end
