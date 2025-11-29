@class UILabel, UIButton;

@interface AWEBindPhoneNumberTipView : UIView

@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (nonatomic) unsigned long long type;

- (id)initWithSepLine:(BOOL)a0;
- (void)addCloseBtnTarget:(id)a0 action:(SEL)a1;
- (void)addLabelTapTarget:(id)a0 action:(SEL)a1;
- (id)initWithType:(unsigned long long)a0 sepLine:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
