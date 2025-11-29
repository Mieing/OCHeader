@class AWEUserProtocolPopContentView, AWEUserProtocolPopViewModel, UIView;

@interface AWEUserProtocolPopView : UIView

@property (retain, nonatomic) UIView *customMaskView;
@property (retain, nonatomic) AWEUserProtocolPopContentView *contentView;
@property (retain, nonatomic) AWEUserProtocolPopViewModel *model;
@property (copy, nonatomic) id /* block */ callBack;

- (void)trackShow;
- (void)trackClickWithAction:(id)a0;
- (void)clickAgreeButton:(id)a0;
- (void)clickDisagreeButton:(id)a0;
- (void)showInView:(id)a0 completion:(id /* block */)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
