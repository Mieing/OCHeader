@class NSString, W1wPersonalMsgSessionStorage;
@protocol W1wPersonalMsgSessionViewModelDelegate;

@interface W1wPersonalMsgSessionViewModel : NSObject <W1wPersonalMsgSessionMgrExt>

@property (retain, nonatomic) W1wPersonalMsgSessionStorage *sessionStorage;
@property (nonatomic) unsigned int systemNotificationCount;
@property (nonatomic) BOOL notifyEnable;
@property (retain, nonatomic) NSString *pageId;
@property (weak, nonatomic) id<W1wPersonalMsgSessionViewModelDelegate> delegate;

- (id)initWithSessionStorage:(id)a0;
- (void)dealloc;
- (id)W1wSystemSessionData;
- (unsigned long long)msgSessionCount;
- (id)msgSessionCellViewModelAtIndex:(long long)a0;
- (void)deleteMsgSession:(id)a0;
- (void)didSelectW1wMsgSessionAtIndex:(long long)a0;
- (void)onW1wPersonalMsgSessionUpdatedForUsername:(id)a0;
- (void)onW1wPersonalMsgNotifyEnableUpdatedForUsername:(id)a0 enable:(BOOL)a1;
- (void).cxx_destruct;

@end
