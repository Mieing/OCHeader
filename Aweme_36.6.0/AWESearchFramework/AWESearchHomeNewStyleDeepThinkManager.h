@class UILabel, UIView, AWESearchHomeNewStyleSearchBarElement;

@interface AWESearchHomeNewStyleDeepThinkManager : NSObject

@property (retain, nonatomic) AWESearchHomeNewStyleSearchBarElement *deepThinkIcon;
@property (retain, nonatomic) UILabel *deepThinkLabel;
@property (retain, nonatomic) UILabel *autoOpenLabel;
@property (nonatomic) BOOL isAutoOpenLabelShow;
@property (nonatomic) BOOL isCanCostAniEvent;
@property (nonatomic) BOOL isUsedAutoOpenDeepThinkAni;
@property (nonatomic) BOOL isNeedToCostAniEvent;
@property (nonatomic) BOOL isDeepThinkIsOpen;
@property (nonatomic) BOOL isKeyboardShow;
@property (nonatomic) BOOL isSuperAgentOpen;
@property (nonatomic) BOOL isShortCutStatus;
@property (retain, nonatomic) UIView *button;
@property (copy, nonatomic) id /* block */ turnDeepThinkToOpen;
@property (nonatomic) unsigned long long forceTheme;
@property (weak, nonatomic) UIView *superAgentBtn;

- (void)autoOpenDeepThink:(BOOL)a0;
- (void)turnDeepThinkToOpen:(BOOL)a0;
- (void)updateAutoOpenUI:(BOOL)a0;
- (void)closeAutoOpenLabelImmediately;
- (void)deepThinkChangeNotification:(id)a0;
- (void)executeAutoOpenAnimation;
- (void)executeAutoCloseAnimation:(double)a0;
- (void)updateSuperAgentStatus:(BOOL)a0;
- (void)notiCostAni:(BOOL)a0;
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
