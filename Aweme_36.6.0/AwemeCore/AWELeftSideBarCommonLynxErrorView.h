@class NSString, UILabel, UIView, UIButton;

@interface AWELeftSideBarCommonLynxErrorView : UIView <BDXLoadErrorViewProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UIButton *reloadButton;
@property (copy, nonatomic) id /* block */ reloadBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadButtonClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end
