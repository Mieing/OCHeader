@class UIProgressView, NSString, UIImageView, DUXButton, UILabel, UIView;

@interface AWEPayRPDetailCommandView : UIView

@property (retain, nonatomic) DUXButton *sendCommandButton;
@property (retain, nonatomic) UILabel *commandRedPacketLabel;
@property (retain, nonatomic) UIView *commandContentView;
@property (retain, nonatomic) UIView *commandTitleContainerView;
@property (retain, nonatomic) UIImageView *leftDecorationView;
@property (retain, nonatomic) UIImageView *rightDecorationView;
@property (retain, nonatomic) UILabel *commandTitleLabel;
@property (retain, nonatomic) UIImageView *commandImageView;
@property (retain, nonatomic) UIProgressView *commandProgressView;
@property (retain, nonatomic) UILabel *commandSendSuccessLabel;
@property (copy, nonatomic) NSString *commandContent;
@property (copy, nonatomic) id /* block */ sendCommandBlock;
@property (nonatomic) BOOL sendButtonLoading;

- (void)p_sendCommandButtonClicked;
- (void)startOpenCommandRedpacketAnimation:(id /* block */)a0;
- (void)startOpenCommandRedpacketSuccessAnimation:(id /* block */)a0;
- (void)startOpenCommandRedpacketFailAnimation;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
