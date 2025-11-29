@protocol IESLiveInteractFanTicketDelegate;

@interface IESLiveBaseFanTicketStore : NSObject

@property (weak, nonatomic) id<IESLiveInteractFanTicketDelegate> delegate;
@property (nonatomic) BOOL guestCanAcceptGift;

- (id)initWithDelegete:(id)a0 DIContext:(id)a1;
- (void).cxx_destruct;

@end
