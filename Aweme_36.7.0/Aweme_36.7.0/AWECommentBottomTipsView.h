@class NSString, UILabel, UIView, UIButton;

@interface AWECommentBottomTipsView : UIView <AWECommentBottomTipsViewProtocol, AWECommentListBottomContainerSubViewDelegate>

@property (retain, nonatomic) UIView *baseView;
@property (nonatomic) BOOL isBGColorWhite;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (void)onUIThemeUpdateWith:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isBGWhiteColor:(BOOL)a1;
- (void).cxx_destruct;
- (void)refreshUI;

@end
