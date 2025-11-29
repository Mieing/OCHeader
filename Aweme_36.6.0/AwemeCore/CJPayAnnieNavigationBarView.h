@class UIViewController, NSString, UIImageView, BDXContext, UILabel, UIView, CJPayStandardNavigationBar;
@protocol BDXContainerProtocol;

@interface CJPayAnnieNavigationBarView : UIView <BDXNavigationBarProtocol>

@property (retain, nonatomic) CJPayStandardNavigationBar *navigationBar;
@property (retain, nonatomic) UIView *mainTitleView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UIView *imageContentView;
@property (retain, nonatomic) UIImageView *backGroundView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (copy, nonatomic) NSString *titleStr;
@property (weak, nonatomic) BDXContext *context;
@property (weak, nonatomic) UIViewController<BDXContainerProtocol> *container;
@property (copy, nonatomic) id /* block */ onLeftButtonClick;
@property (copy, nonatomic) id /* block */ onRightButtonClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)navigationHeight;
- (void)attachToContainerWithParams:(id)a0 context:(id)a1 containerVC:(id)a2;
- (void)updateLeftItemsWithContext:(id)a0 containerVC:(id)a1;
- (void)updateRightItemsWithContext:(id)a0 containerVC:(id)a1;
- (void)attachToContainerWithParams:(id)a0 context:(id)a1;
- (void)p_setupPopupUI;
- (void)p_setupPageUI;
- (void)updateContentBytitle:(id)a0 titleColor:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (void)updateBackgroundColor:(id)a0;
- (void)back;

@end
