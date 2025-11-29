@class NSString;

@interface AWEIMStrangerReadStateTopTipViewInteractor : AWEIMStrangerCommonTopTipViewInteractor <AWEIMTopNoticeTipInteractorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)didClickTopTipViewActionBtnWithType:(long long)a0;
- (void)didClickTopTipViewCloseBtnWithType:(long long)a0;
- (void)showTopTipView;
- (id)init;

@end
