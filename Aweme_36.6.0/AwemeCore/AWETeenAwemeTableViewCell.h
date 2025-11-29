@class UIViewController, AWETeenCustomDisplayViewModel, AWETeenCustomDisplayViewController;

@interface AWETeenAwemeTableViewCell : UITableViewCell

@property (retain, nonatomic) AWETeenCustomDisplayViewModel *cellModel;
@property (retain, nonatomic) AWETeenCustomDisplayViewController *viewController;
@property (weak, nonatomic) UIViewController *parentVC;

- (void)replaceViewController:(id)a0 removeIfExisting:(BOOL)a1;
- (void)p_setupParentVC:(id)a0;
- (void)p_removeChildVC;
- (void)configWithModel:(id)a0 parentVC:(id)a1;
- (void)p_addChildVC;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
