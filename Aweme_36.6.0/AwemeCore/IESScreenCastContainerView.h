@protocol BDByteScreenCastClarityChooseView;

@interface IESScreenCastContainerView : UIView

@property (copy, nonatomic) id /* block */ didAddClarityChooseViewControllerBlock;
@property (copy, nonatomic) id /* block */ willRemoveClarityChooseViewControllerBlock;
@property (weak, nonatomic) id<BDByteScreenCastClarityChooseView> clarityChooseView;

- (void).cxx_destruct;
- (void)didAddSubview:(id)a0;
- (void)willRemoveSubview:(id)a0;

@end
