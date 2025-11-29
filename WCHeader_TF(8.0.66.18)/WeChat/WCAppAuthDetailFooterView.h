@class UIButton;
@protocol WCAppAuthDetailFooterViewDelegate;

@interface WCAppAuthDetailFooterView : UIView

@property (retain, nonatomic) UIButton *cancelBtn;
@property (weak, nonatomic) id<WCAppAuthDetailFooterViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initBtn;
- (double)btnHeight;
- (double)btnBottomPadding;
- (void)layoutSubviews;
- (void)onCancelBtnClick;
- (void).cxx_destruct;

@end
