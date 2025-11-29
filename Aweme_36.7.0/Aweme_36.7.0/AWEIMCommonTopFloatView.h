@class IESIMButton, AWEIMCommonTopFloatViewConfig, UILabel, UIView;

@interface AWEIMCommonTopFloatView : UIView

@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) IESIMButton *closeBtn;
@property (retain, nonatomic) IESIMButton *actionBtn;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEIMCommonTopFloatViewConfig *config;

- (void)p_didClickCloseButton;
- (void)p_didClickActionButton;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
