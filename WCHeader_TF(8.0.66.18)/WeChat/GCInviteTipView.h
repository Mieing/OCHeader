@class UIImageView, UILabel, UIButton;

@interface GCInviteTipView : UIView

@property (retain, nonatomic) UIImageView *topIconView;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UILabel *descView;
@property (retain, nonatomic) UIImageView *contentImgView;
@property (retain, nonatomic) UIButton *confirmBtn;

- (void)configureWithConfig:(id)a0;
- (void).cxx_destruct;

@end
