@class UILabel, NSString;

@interface IESECWinNavSearchBar : UIView

@property (retain, nonatomic) UILabel *placeholderLabel;
@property (copy, nonatomic) id /* block */ searchClickBlock;
@property (copy, nonatomic) NSString *placeholder;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
