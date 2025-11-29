@class UILabel, UIButton;

@interface AWEJudgeVideoView : UIView

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIButton *cancelButton;

- (id)initWithTitle:(id)a0 actionTitle:(id)a1 cancelTitle:(id)a2;
- (void)updateAcceptAction:(BOOL)a0;
- (void)resetButtonStatus;
- (void).cxx_destruct;
- (void)setCancelBlock:(id /* block */)a0;
- (void)setActionBlock:(id /* block */)a0;
- (void)updateTitle:(id)a0;

@end
