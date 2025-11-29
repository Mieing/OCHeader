@class DUXButton, AWEPlayInteractionTemplateButtonConfig;

@interface AWEPlayInteractionTemplateButton : UIView

@property (retain, nonatomic) AWEPlayInteractionTemplateButtonConfig *config;
@property (retain, nonatomic) DUXButton *button;

- (void)playFlashAnimation;
- (void)btnClicked:(id)a0;
- (void)handleIcon;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupButton;

@end
