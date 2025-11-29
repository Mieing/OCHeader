@class WCPayJumpRemindControlLogic, NSString, MMVoidBoolStringCallback;

@interface MMKindaJumpRemindManagerImpl : NSObject <MMKindaJumpRemindManager>

@property (retain, nonatomic) MMVoidBoolStringCallback *m_interruptCb;
@property (retain, nonatomic) MMVoidBoolStringCallback *m_continueCb;
@property (retain, nonatomic) WCPayJumpRemindControlLogic *m_jumpRemindControlLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
