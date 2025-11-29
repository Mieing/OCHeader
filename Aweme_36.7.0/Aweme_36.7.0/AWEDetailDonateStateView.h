@class UILabel, NSMutableDictionary;

@interface AWEDetailDonateStateView : UIView

@property (retain, nonatomic) NSMutableDictionary *titleDictionary;
@property (retain, nonatomic) NSMutableDictionary *titleColorDictionary;
@property (retain, nonatomic) NSMutableDictionary *backgroundColorDictionary;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long donateState;

- (void)p_updateUI;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundColor:(id)a0 forState:(long long)a1;
- (void)setTitleColor:(id)a0 forState:(long long)a1;

@end
