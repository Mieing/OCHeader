@protocol RTVUserProfileManagerInterface;

@interface RTVVoipStartTransferActionHandler : RTVVoipStateTransferActionHandler

@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;

+ (long long)supportState;

- (void)rxAwakeFromPropertyInjection;
- (id)doHandleAction:(id)a0;
- (void).cxx_destruct;

@end
