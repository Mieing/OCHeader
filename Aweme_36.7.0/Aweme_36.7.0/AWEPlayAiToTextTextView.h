@class AWEPlayAiToTextSelectedMenuView, DUXPopover, NSString, UIView;
@protocol AWEPlayAiToTextTextViewDelegate;

@interface AWEPlayAiToTextTextView : UITextView <AWEPlayAiToTextSelectedMenuViewDelegate>

@property (retain, nonatomic) AWEPlayAiToTextSelectedMenuView *menuView;
@property (retain, nonatomic) DUXPopover *popover;
@property (retain, nonatomic) UIView *popoverTargetView;
@property (weak, nonatomic) id<AWEPlayAiToTextTextViewDelegate> actionDelegate;
@property (nonatomic) BOOL isMenuShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideCustomMenu;
- (void)showCustomMenuIfNeed;
- (id)menuButtons;
- (void)aiToTextSelectedMenuViewDidClickPlay:(id)a0;
- (void)aiToTextSelectedMenuViewDidClickCopy:(id)a0;
- (void)aiToTextSelectedMenuViewDidClickSearch:(id)a0;
- (void)aiToTextSelectedMenuViewDidClickRepost:(id)a0;
- (void)receiveTouchOnPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)showCustomMenu;
- (void).cxx_destruct;
- (void)buildMenuWithBuilder:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
