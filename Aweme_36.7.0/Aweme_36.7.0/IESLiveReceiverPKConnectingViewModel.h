@class HTSLivePKApi;

@interface IESLiveReceiverPKConnectingViewModel : NSObject

@property (retain, nonatomic) HTSLivePKApi *pkApi;

- (id)initWithDIContext:(id)a0;
- (void)rejectInvitedWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
