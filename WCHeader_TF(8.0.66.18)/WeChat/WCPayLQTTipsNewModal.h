@class NSString, NSArray, UILabel, UIView, UIButton;
@protocol WCPayLQTTipsNewModalDelegate;

@interface WCPayLQTTipsNewModal : UIView <ILinkEventExt, MMWebViewDelegate>

@property (weak, nonatomic) id<WCPayLQTTipsNewModalDelegate> delegate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *contentsView;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isFof;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 contents:(id)a1 isFof:(BOOL)a2;
- (void)updateWithTitle:(id)a0 contents:(id)a1 isFof:(BOOL)a2;
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
