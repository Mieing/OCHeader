@class NSString;

@interface IESIMSafeRemindViewDelegate : NSObject <AWEInnerNotificationMessage, IESIMSafeRemindViewDelegateProtocol>

@property (copy, nonatomic) id /* block */ notificationAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)innerNotificationDidDisplay:(id)a0;
- (void)listenInnerNotificationWithAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
