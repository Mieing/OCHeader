@class DUXActionPopover, NSString, AWEButton, NSArray, AWEIMCompanyMenuItem, AWEUserModel;

@interface AWEIMCompanyMenuLevelOneView : UIView

@property (retain, nonatomic) AWEButton *button;
@property (copy, nonatomic) NSString *companyUID;
@property (copy, nonatomic) NSString *conversationId;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (nonatomic) double subMenuMargin;
@property (copy, nonatomic) AWEIMCompanyMenuItem *menu;
@property (weak, nonatomic) DUXActionPopover *popover;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) id /* block */ selectBlock;
@property (copy, nonatomic) id /* block */ didClickAutoreplyMenu;
@property (copy, nonatomic) id /* block */ didClickMenu;

- (void)hideSubMenu;
- (id)initWithMenu:(id)a0 subItem:(id)a1;
- (void)showSubMenu:(id)a0;
- (void)trackItemShowWithItem:(id)a0;
- (void)menuClicked;
- (void)handleItem:(id)a0;
- (void)trackItemClickWithItem:(id)a0;
- (void)trackClickMenuWithItem:(id)a0;
- (void)hideSubMenuForStyleOptimize;
- (void)showSubMenuForStyleOptimize:(id)a0;
- (id)menuTypeWithItem:(id)a0;
- (id)trackParamsWithItem:(id)a0;
- (void).cxx_destruct;
- (id)menuActions;
- (void)setupUI;

@end
