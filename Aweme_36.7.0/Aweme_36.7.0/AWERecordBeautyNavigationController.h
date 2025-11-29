@class NSString, AWERecordBeautyVCContext;

@interface AWERecordBeautyNavigationController : UINavigationController <UINavigationControllerDelegate>

@property (weak, nonatomic) AWERecordBeautyVCContext *context;
@property (copy, nonatomic) id /* block */ beautyNavigationControllerDidTapBackAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEnableRecordBeautyAddStyleEffectSwitchStatus;
- (id)initWithRootViewController:(id)a0 context:(id)a1;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;
- (id)popViewControllerAnimated:(BOOL)a0;

@end
