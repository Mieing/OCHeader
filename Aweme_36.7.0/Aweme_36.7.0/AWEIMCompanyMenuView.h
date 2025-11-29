@class NSArray, AWEButton, NSString, UIView, AWEIMCompanyMenuModel, AWEUserModel;

@interface AWEIMCompanyMenuView : UIView

@property (retain, nonatomic) AWEIMCompanyMenuModel *menuModel;
@property (retain, nonatomic) NSArray *menus;
@property (retain, nonatomic) AWEButton *switchToKeyboardButton;
@property (retain, nonatomic) UIView *separator;
@property (copy, nonatomic) NSString *conversationId;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) id /* block */ didClickKeyboard;
@property (copy, nonatomic) id /* block */ didClickAutoreplyMenu;
@property (copy, nonatomic) id /* block */ didClickMenu;
@property (copy, nonatomic) id /* block */ didTapped;
@property (copy, nonatomic) id /* block */ canSwitchToKeyboard;

- (id)initWithModel:(id)a0 conversationId:(id)a1 userModel:(id)a2;
- (void)hideSubMenu;
- (void)hideSwitchKeyboradButton:(BOOL)a0;
- (void)adjustSwitchKeyboardButtonWidth:(double)a0 leftMargin:(double)a1;
- (id)switchButtonImage;
- (void)clickKeyboard;
- (id)generateSeparator;
- (id)p_applyAlpha:(double)a0 toImage:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
