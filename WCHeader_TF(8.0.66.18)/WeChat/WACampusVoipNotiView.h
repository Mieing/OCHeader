@class MMVoipCSMainWindow, NSString, UIImageView, WACampusVoipMsg, UILabel, VoipAutoUpdateLabel, UIButton;

@interface WACampusVoipNotiView : UIControl <MMVoipCSMainWindowDelegate>

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) VoipAutoUpdateLabel *descLabel;
@property (retain, nonatomic) UIButton *rejectButton;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) MMVoipCSMainWindow *notiWindow;
@property (retain, nonatomic) WACampusVoipMsg *msg;
@property (copy, nonatomic) id /* block */ clickAction;
@property (copy, nonatomic) id /* block */ acceptAction;
@property (copy, nonatomic) id /* block */ rejectAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMsg:(id)a0 clickAction:(id /* block */)a1 acceptAction:(id /* block */)a2 rejectAction:(id /* block */)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleContentViewPanGesture:(id)a0;
- (void)show;
- (void)dismiss;
- (void)setupViews;
- (void)onMMVoipCSMainWindowQuitAnimationDidEnd;
- (void).cxx_destruct;

@end
