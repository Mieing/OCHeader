@class NSString;

@interface AWEIMNoticeMessageViewModel : AWEIMMessageViewModel <AWEIMLinkTextBehaviorOccursMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willDisplayByMessageVisibleLifeCycle;
- (void)setupWithMessage:(id)a0;
- (void)addKVO;
- (void)linkTextBehaviorOccursWith:(id)a0 message:(id)a1;
- (void)__willDisplayManagerOperationLog;
- (void)__transferToUserProfileBehaviorOccursWith:(id)a0 message:(id)a1;
- (void)dealloc;

@end
