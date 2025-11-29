@class MMUILabel, MMUIButton;

@interface MMLiveCameraCastTipView : UIView {
    id /* block */ _actionClickBlock;
}

@property (retain, nonatomic) MMUIButton *backgroundButton;
@property (retain, nonatomic) MMUIButton *foregroundButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (nonatomic) long long state;

- (id)initWithState:(long long)a0;
- (void)setType:(long long)a0;
- (void)updateContentWithType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)actionButtonClick;
- (void)setActionClickBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
