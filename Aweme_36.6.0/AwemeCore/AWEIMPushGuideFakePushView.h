@class UIImageView, UILabel, UIView;

@interface AWEIMPushGuideFakePushView : UIView

@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *containerView;

- (void)updateFakeViewWithTitle:(id)a0 content:(id)a1 avatarURL:(id)a2 userCorner:(BOOL)a3;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
