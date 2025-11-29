@class ConcertTicketInfo, BaseResponse;

@interface FinderLiveReceiveConcertTicketResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) ConcertTicketInfo *ticketInfo;

+ (void)initialize;

@end
