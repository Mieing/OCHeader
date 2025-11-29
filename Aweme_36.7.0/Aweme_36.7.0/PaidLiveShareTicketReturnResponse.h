@class PaidLiveShareTicketReturnResponse_PaidLiveShareTicketReturnData;

@interface PaidLiveShareTicketReturnResponse : IESLivePBBaseMessage

@property (retain, nonatomic) PaidLiveShareTicketReturnResponse_PaidLiveShareTicketReturnData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
