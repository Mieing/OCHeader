@class AWEIMIncentiveChatInteractorViewConfig, AWEButton, UILabel, UIView;

@interface AWEIMIncentiveChatInteractorView : UIView

@property (retain, nonatomic) AWEIMIncentiveChatInteractorViewConfig *config;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEButton *confirmButton;
@property (retain, nonatomic) AWEButton *closeButton;
@property (retain, nonatomic) UIView *bottomLine;
@property (copy, nonatomic) id /* block */ didClickConfirmBlock;
@property (copy, nonatomic) id /* block */ didClickCloseBlock;

- (void)__createComponents;
- (void)__layoutComponents;
- (void)updateWithChatHasBackground:(BOOL)a0;
- (void)updateConfigTitleString:(id)a0;
- (void)__didTapConfirmButton:(id)a0;
- (void)__didTapCloseButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
