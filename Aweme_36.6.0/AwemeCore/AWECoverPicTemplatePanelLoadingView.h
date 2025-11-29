@class UILabel, UIButton, UIView;
@protocol ACCLoadingViewProtocol;

@interface AWECoverPicTemplatePanelLoadingView : UIView

@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIView *failContentView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *reloadBtn;
@property (nonatomic) unsigned long long loadingStatus;
@property (copy, nonatomic) id /* block */ reloadBlk;

- (void)reloadBtnClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
