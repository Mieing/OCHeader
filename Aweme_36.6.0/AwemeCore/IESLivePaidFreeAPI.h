@protocol IESLivePaywallShareTicketInterface;

@interface IESLivePaidFreeAPI : NSObject

@property (weak, nonatomic) id<IESLivePaywallShareTicketInterface> ticketInterface;

- (void)fetchShareTicketInfoWithRoomID:(id)a0 userID:(id)a1 enterFrom:(long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
