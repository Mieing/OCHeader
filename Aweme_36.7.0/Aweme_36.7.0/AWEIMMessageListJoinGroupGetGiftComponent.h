@class NSString;

@interface AWEIMMessageListJoinGroupGetGiftComponent : AWEIMMessageListTopFloatingBaseComponent <AWEIMTopNoticeTipInteractorProtocol>

@property (nonatomic) BOOL didChecked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewWillAppear;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didClickTopTipViewActionBtnWithType:(long long)a0;
- (void)didClickTopTipViewCloseBtnWithType:(long long)a0;
- (void)__enableShowJoinGroupGetGiftsTipWithCompletion:(id /* block */)a0;
- (void)__showJoinGroupGetGiftsTip;

@end
