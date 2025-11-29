@class AWEIMLifeServiceChatMenuViewModel, NSArray, UIView, AWEIMInputVCBadgeButton;
@protocol AWEIMLifeServiceChatMenuViewDelegate;

@interface AWEIMLifeServiceChatMenuView : UIView

@property (retain, nonatomic) AWEIMLifeServiceChatMenuViewModel *viewModel;
@property (retain, nonatomic) NSArray *menuButtonArray;
@property (retain, nonatomic) AWEIMInputVCBadgeButton *switchButton;
@property (retain, nonatomic) UIView *switchButtonBackgroundView;
@property (copy, nonatomic) NSArray *modelArray;
@property (nonatomic) BOOL isFromPreview;
@property (weak, nonatomic) id<AWEIMLifeServiceChatMenuViewDelegate> delegate;

- (id)initWithModelArray:(id)a0;
- (void)__setupUI;
- (id)switchButtonImage;
- (id)p_applyAlpha:(double)a0 toImage:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfMenuItemAtIndex:(long long)a0;
- (id)__buildItemButtonWithTitle:(id)a0 type:(long long)a1;
- (void)menuViewThemeReload;
- (void)__itemButtonClick:(id)a0;
- (void)__switchButtonClick;
- (BOOL)__canSwitchButtonClick;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;

@end
