@class W1wPersonalMsgSessionInfo, W1wUserContact;

@interface W1wPersonalMsgSessionCellViewModel : NSObject <W1wUserContactMgrExt>

@property (retain, nonatomic) W1wPersonalMsgSessionInfo *sessionInfo;
@property (retain, nonatomic) W1wUserContact *userContact;
@property (nonatomic) BOOL notifyEnable;
@property (copy, nonatomic) id /* block */ onSessionUpdated;

- (id)initWithSessionInfo:(id)a0 contact:(id)a1 notifyEnable:(BOOL)a2;
- (void)dealloc;
- (id)cellData;
- (BOOL)useRoundAvatar;
- (void)W1wUserContactUpdatedForUsername:(id)a0 contact:(id)a1;
- (void).cxx_destruct;

@end
