@class UIView;

@interface AWEViewFactoryController : AWEBaseController

@property (weak, nonatomic) UIView *oldView;

- (BOOL)needShowViewByModel:(id)a0;
- (id)createViewByModel:(id)a0;
- (void)updateViewByModel:(id)a0 model:(id)a1;
- (void).cxx_destruct;

@end
