@class UIButton, UILabel, UIView;
@protocol LSIMChatListNaviBarDelegate;

@interface LSIMChatListNaviBar : LSNaviBar

@property (readonly, nonatomic) UIButton *backBtn;
@property (readonly, nonatomic) UIView *titleContainer;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIButton *cleanBtn;
@property (readonly, nonatomic) UIButton *orderBtn;
@property (readonly, nonatomic) UIButton *serviceProgressBtn;
@property (readonly, nonatomic) UIView *redDot;
@property (weak, nonatomic) id<LSIMChatListNaviBarDelegate> delegate;

- (void)btnClicked:(id)a0;
- (void)hideOrderButton;
- (void)updateRedDot:(BOOL)a0;
- (void)updateProgressServiceBtn:(BOOL)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
