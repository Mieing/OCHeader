@class DUXBaseButton, NSString, AWEIMFlameSendViewModel, UIButton;

@interface AWEIMFlameSendView : UIView <AWEIMFlameSendViewProtocol>

@property (retain, nonatomic) AWEIMFlameSendViewModel *viewModel;
@property (retain, nonatomic) UIButton *flameReplyButton;
@property (retain, nonatomic) UIButton *flameSendButton;
@property (retain, nonatomic) DUXBaseButton *flameOrderButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldUseNewStyle;
- (void)handleClickFlameReply;
- (void)handleClickFlameSend;
- (void)handleClickFlameOrder;
- (void)configWithViewModel:(id)a0;
- (void)initSubviews;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateSubviews;

@end
