@class UIImageView, UILabel, UIView, UIButton;

@interface IESLiveCommentDanmakuSendPopupView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *noAlertImageView;
@property (retain, nonatomic) UILabel *noAlertLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (nonatomic) BOOL isNoAlert;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ noAlertAction;
@property (copy, nonatomic) id /* block */ cancelAction;

- (void)setTabItem:(id)a0;
- (void)tapNoAlert;
- (void)tapCancel;
- (void)tapConfirm;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
