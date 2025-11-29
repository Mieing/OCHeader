@class UILabel, UIButton;

@interface WAMainFrameChatBotVoIPView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *voipBtn;
@property (retain, nonatomic) UILabel *descLabel;

+ (double)ContentWidth;

- (id)init;
- (void)layoutSubviews;
- (void)layoutTitleLabel;
- (void)layoutVoIPButton;
- (void)layoutDescLabel;
- (void)startVoIP;
- (void).cxx_destruct;

@end
