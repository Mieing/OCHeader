@protocol CommonMessageViewModelExtTargetDelegate;

@interface CommonMessageViewModelExtTarget : NSObject <IMsgRevokeExt>

@property (weak, nonatomic) id<CommonMessageViewModelExtTargetDelegate> delegate;

- (id)init;
- (void)OnMsgRevoked:(id)a0 n64MsgId:(long long)a1;
- (void).cxx_destruct;

@end
