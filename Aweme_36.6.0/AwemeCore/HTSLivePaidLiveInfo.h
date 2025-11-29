@class HTSLiveTicketData;

@interface HTSLivePaidLiveInfo : IESLivePBBaseMessage

@property (nonatomic) int paidType;
@property (nonatomic) int viewRight;
@property (nonatomic) long long duration;
@property (retain, nonatomic) HTSLiveTicketData *ticketSession;
@property (nonatomic) BOOL hasTicketSession;
@property (nonatomic) int delivery;
@property (nonatomic) int maxPreviewDuration;

+ (id)descriptor;

@end
