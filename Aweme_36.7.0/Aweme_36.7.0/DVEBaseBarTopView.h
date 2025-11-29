@class UIButton, UILabel;
@protocol DVEBaseBarTopViewDelegate;

@interface DVEBaseBarTopView : UIView

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *applyButton;
@property (weak, nonatomic) id<DVEBaseBarTopViewDelegate> delegate;

- (void)clickCancelButton:(id)a0;
- (void)clickApplyButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
