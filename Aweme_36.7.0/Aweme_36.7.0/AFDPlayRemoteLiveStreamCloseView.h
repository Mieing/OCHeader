@class UIImageView, UILabel;

@interface AFDPlayRemoteLiveStreamCloseView : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)__createComponents;
- (void)__layoutComponents;
- (void)renderModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
