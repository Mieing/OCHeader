@protocol RecoveryPayFooterViewDelegate;

@interface RecoveryPayFooterView : UIView

@property (weak, nonatomic) id<RecoveryPayFooterViewDelegate> delegate;

- (void)loadUI;
- (void)onPay:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
