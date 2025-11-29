@class UIImageView, AWEIMNewVisualMsgInputElementConfiguration;

@interface AWEIMNewVisualMsgInputViewElement : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWEIMNewVisualMsgInputElementConfiguration *configuration;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)setupUI;
- (void)handleTap:(id)a0;

@end
