@class NSString, NSArray, UILabel, UIView, UIButton;
@protocol WCPayTipsNewModalDelegate;

@interface WCPayTipsNewModal : UIView <ILinkEventExt, MMWebViewDelegate>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *cancelBtnStr;
@property (retain, nonatomic) NSString *confirmBtnStr;
@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *contentsView;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) id<WCPayTipsNewModalDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 contents:(id)a1 cancelBtn:(id)a2 confirmBtn:(id)a3;
- (void)layoutSubviews;
- (void)updateView;
- (void)showInView;
- (void)dissmissView;
- (void)hideView:(BOOL)a0;
- (void)onTapCancelBtn;
- (void)onTapConfirmBtn;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)webViewReturn:(id)a0;
- (void).cxx_destruct;

@end
