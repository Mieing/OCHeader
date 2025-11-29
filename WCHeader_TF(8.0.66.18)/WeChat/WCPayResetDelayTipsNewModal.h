@class NSString, UILabel, UIView, UIButton;
@protocol WCPayResetDelayTipsNewModalDelegate;

@interface WCPayResetDelayTipsNewModal : UIView

@property (weak, nonatomic) id<WCPayResetDelayTipsNewModalDelegate> delegate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subscTexts;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *contentsView;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL isShowing;

- (id)initWithTitle:(id)a0 subscTexts:(id)a1;
- (void)layoutSubviews;
- (void)updateView;
- (void)showInView;
- (void)dissmissView;
- (void)hideView:(BOOL)a0;
- (void)onTapCancelBtn;
- (void)onTapConfirmBtn;
- (void).cxx_destruct;

@end
