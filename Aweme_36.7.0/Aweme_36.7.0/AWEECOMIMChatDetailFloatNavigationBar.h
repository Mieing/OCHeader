@class AWEECOMIMRedDotView, DUXPopover, AWEECOMIMPageTrackUtil, UILabel, UIView, UIButton;

@interface AWEECOMIMChatDetailFloatNavigationBar : UIView

@property (retain, nonatomic) UIButton *fullButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *slideView;
@property (retain, nonatomic) UIButton *topIconsBtn;
@property (retain, nonatomic) AWEECOMIMRedDotView *topIconsRedDotView;
@property (retain, nonatomic) DUXPopover *popover;
@property (copy, nonatomic) id /* block */ fullButtonClickBlock;
@property (copy, nonatomic) id /* block */ topButtonClickBlock;
@property (copy, nonatomic) id /* block */ closeButtonClickBlock;
@property (weak, nonatomic) AWEECOMIMPageTrackUtil *pageTrackUtil;

+ (Class)aAWEECModuleServiceDOUYINLGAdapterClass;

- (void)closeButtonClick:(id)a0;
- (id)aAWEECModuleServiceDOUYINLGAdapter;
- (void)fullButtonClick:(id)a0;
- (void)topButtonClick:(id)a0;
- (void)updateBarWithTitle:(id)a0;
- (void)updateTopIcons:(id)a0 pigeonBizType:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
