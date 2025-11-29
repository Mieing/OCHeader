@class NSString;

@interface AWEIMMessageTailStateComponent : AWEIMFlexComponent <AWEIMMessageTailStateUIInterface>

@property (nonatomic) long long delayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_stateConfig;
+ (BOOL)p_enableDelaySetting;
+ (long long)p_delayTimeWithMsgType:(long long)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_resendMessage:(id)a0;
- (void)updateStateUI;
- (void)createPresenterIfNeeded;
- (void)stateViewTapped;
- (void)p_addStateVMKVO;
- (void)p_addSendingProgressKVOIfNeeded;
- (void)p_updateStateColor;
- (void)p_resendMessageWhenFormat:(id)a0;
- (id)p_getListVC;
- (void)p_delayActionFinish;
- (void)p_beginDelayLoadingIfNeed;
- (void)p_updateDisplayStateWithVM:(id)a0;
- (void)dealloc;

@end
