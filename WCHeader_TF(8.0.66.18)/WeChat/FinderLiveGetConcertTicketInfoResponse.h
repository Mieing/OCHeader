@class ConcertTicketInfo, BaseResponse;

@interface FinderLiveGetConcertTicketInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) ConcertTicketInfo *ticketInfo;

+ (void)initialize;

@end
