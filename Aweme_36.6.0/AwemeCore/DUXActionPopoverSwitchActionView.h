@class UIStackView, DUXPopoverUIConfigModel, DUXSwitch, NSString, UILabel, DUXActionPopoverSwitchAction;
@protocol DUXActionPopoverActionViewDelegate;

@interface DUXActionPopoverSwitchActionView : UIView <DUXActionPopoverActionViewProtocol>

@property (retain, nonatomic) DUXActionPopoverSwitchAction *action;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXSwitch *switchControl;
@property (retain, nonatomic) DUXPopoverUIConfigModel *uiConfig;
@property (weak, nonatomic) id<DUXActionPopoverActionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)actionPopoverActionWidth;
- (void)__handleSwitchValueChange:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithAction:(id)a0;
- (void)setupUI;

@end
