@class UIImageView, UILabel;

@interface IESLiveMSeqGrabMicView : UIView

@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) UIImageView *authenticationIcon;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (copy, nonatomic) id /* block */ rejectClick;
@property (copy, nonatomic) id /* block */ acceptClick;
@property (nonatomic) BOOL alertSwitchClose;

- (void)rejectBtnClick:(id)a0;
- (void)acceptBtnClick:(id)a0;
- (void)alertSwitchClick:(id)a0;
- (void)setupWithGrabMicMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
