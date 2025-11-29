@class UILabel, UIButton;

@interface AWEIMMigratingAuthorizationTopNoticeTipView : UIView

@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *actionButton;
@property (copy, nonatomic) id /* block */ cancelClickBlock;
@property (copy, nonatomic) id /* block */ actionClickBlock;

- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void)didClickCloseButton:(id)a0;
- (id)initWithTipLabelText:(id)a0 actionButtonText:(id)a1 viewWidth:(double)a2;
- (void)setupUIWithViewWidth:(double)a0;
- (void)didClickActionButton:(id)a0;
- (void).cxx_destruct;

@end
