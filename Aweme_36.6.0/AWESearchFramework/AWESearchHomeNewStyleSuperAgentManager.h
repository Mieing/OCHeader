@class UILabel, UIView, AWESearchHomeNewStyleSearchBarElement;

@interface AWESearchHomeNewStyleSuperAgentManager : NSObject

@property (retain, nonatomic) AWESearchHomeNewStyleSearchBarElement *superAgentIcon;
@property (nonatomic) BOOL isSuperAgentIsOpen;
@property (retain, nonatomic) UILabel *superAgentLabel;
@property (retain, nonatomic) UIView *button;
@property (copy, nonatomic) id /* block */ turnSuperAgentToOpen;
@property (copy, nonatomic) id /* block */ tapCallBack;
@property (nonatomic) unsigned long long forceTheme;

- (void)turnSuperAgentToOpen:(BOOL)a0;
- (void)updateToShortCutStatus;
- (void)resetStatus;
- (void)keyboardWillShow;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)keyboardDidHide;
- (void)setupUI;
- (void)handleTap;

@end
