@class UIButton, IESWalletAuthCJPopViewItem, UIView;

@interface IESWalletAuthCJPopView : IESWalletPopContainer

@property (retain, nonatomic) UIView *whiteboard;
@property (retain, nonatomic) UIView *cutLine;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (readonly, nonatomic) IESWalletAuthCJPopViewItem *model;
@property (retain, nonatomic) UIView *lastView;

- (void)setupHeader;
- (void)closeTapHandler;
- (void)didBindViewModel;
- (void)setupCutLine;
- (void)setupMain;
- (void)setupCloseBtn;
- (void)setupConfirmBtn;
- (void)adjustHeight;
- (void)confirmTapHandler;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)setup;

@end
