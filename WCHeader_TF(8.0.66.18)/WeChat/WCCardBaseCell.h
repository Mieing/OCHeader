@class UIView;

@interface WCCardBaseCell : MMTableViewCell

@property (retain, nonatomic) UIView *highlightView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setNeedHighlightBkgView:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
