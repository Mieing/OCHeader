@class AWEIMLifeServiceChatMenuShortModel, NSArray, UIView;
@protocol IESIMActionPopoverProtocol;

@interface AWEIMConversationBottomMenuItemView : UIView

@property (weak, nonatomic) UIView<IESIMActionPopoverProtocol> *popover;
@property (retain, nonatomic) AWEIMLifeServiceChatMenuShortModel *model;
@property (copy, nonatomic) NSArray *subModels;
@property (copy, nonatomic) id /* block */ selectMenuBlock;
@property (copy, nonatomic) id /* block */ didClickMenuBlock;
@property (copy, nonatomic) id /* block */ didPopSubMenuBlock;

- (void)menuClicked;
- (void)p_hideSubMenu;
- (void)p_showSubMenu:(id)a0;
- (id)__buildItemButtonWithTitle:(id)a0 type:(long long)a1;
- (id)initWithModel:(id)a0 subModels:(id)a1;
- (void).cxx_destruct;
- (id)menuActions;
- (void)setupUI;

@end
