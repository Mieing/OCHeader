@class AWEBasicModeCustomDisplayViewModel, AWEBasicModeCustomDisplayViewController;

@interface AWEBasicModeAwemeTableViewCell : UITableViewCell

@property (retain, nonatomic) AWEBasicModeCustomDisplayViewModel *cellModel;
@property (retain, nonatomic) AWEBasicModeCustomDisplayViewController *viewController;

- (void)p_setupParentVC:(id)a0;
- (void)p_addChildVC:(id)a0;
- (void)p_removeChildVC;
- (void)configWithModel:(id)a0 parentVC:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
